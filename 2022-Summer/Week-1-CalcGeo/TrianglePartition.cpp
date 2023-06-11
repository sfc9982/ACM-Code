//
// Created by sfc9982 on 2022/7/11.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

const double EPS  = 1e-8;
const int    MAXV = 10000;

struct Point {
    double x, y;
    int    id;

    Point(double a = 0, double b = 0, int c = -1)
        : x(a), y(b), id(c) {
    }

    bool operator<(const Point &a) const {
        return x < a.x || (fabs(x - a.x) < EPS && y < a.y);
    }

    bool operator==(const Point &a) const {
        return fabs(x - a.x) < EPS && fabs(y - a.y) < EPS;
    }

    double dist2(const Point &b) {
        return (x - b.x) * (x - b.x) + (y - b.y) * (y - b.y);
    }
};

struct Point3D {
    double x, y, z;

    Point3D(double a = 0, double b = 0, double c = 0)
        : x(a), y(b), z(c) {
    }

    Point3D(const Point &p) {
        x = p.x, y = p.y, z = p.x * p.x + p.y * p.y;
    }

    Point3D operator-(const Point3D &a) const {
        return Point3D(x - a.x, y - a.y, z - a.z);
    }

    double dot(const Point3D &a) {
        return x * a.x + y * a.y + z * a.z;
    }
};

struct Edge {
    int                       id;
    std::list<Edge>::iterator c;

    Edge(int id = 0) {
        this->id = id;
    }
};

int cmp(double v) {
    return fabs(v) > EPS ? (v > 0 ? 1 : -1) : 0;
}

double cross(const Point &o, const Point &a, const Point &b) {
    return (a.x - o.x) * (b.y - o.y) - (a.y - o.y) * (b.x - o.x);
}

Point3D cross(const Point3D &a, const Point3D &b) {
    return Point3D(a.y * b.z - a.z * b.y, -a.x * b.z + a.z * b.x,
                   a.x * b.y - a.y * b.x);
}

int inCircle(const Point &a, Point b, Point c, const Point &p) {
    if (cross(a, b, c) < 0)
        std::swap(b, c);
    Point3D a3(a), b3(b), c3(c), p3(p);
    b3 = b3 - a3, c3 = c3 - a3, p3 = p3 - a3;
    Point3D f = cross(b3, c3);
    return cmp(p3.dot(f)); // check same direction, in: < 0, on: = 0, out: > 0
}

int intersection(const Point &a, const Point &b, const Point &c,
                 const Point &d) { // seg(a, b) and seg(c, d)
    return cmp(cross(a, c, b)) * cmp(cross(a, b, d)) > 0 &&
           cmp(cross(c, a, d)) * cmp(cross(c, d, b)) > 0;
}

class Delaunay {
public:
    std::list<Edge> head[MAXV]; // graph
    Point           p[MAXV];
    int             n, rename[MAXV];

    void init(int n, Point p[]) {
        memcpy(this->p, p, sizeof(Point) * n);
        std::sort(this->p, this->p + n);
        for (int i = 0; i < n; i++)
            rename[p[i].id] = i;
        this->n = n;
        divide(0, n - 1);
    }

    void addEdge(int u, int v) {
        head[u].push_front(Edge(v));
        head[v].push_front(Edge(u));
        head[u].begin()->c = head[v].begin();
        head[v].begin()->c = head[u].begin();
    }

    void divide(int l, int r) {
        if (r - l <= 2) { // #point <= 3
            for (int i = l; i <= r; i++)
                for (int j = i + 1; j <= r; j++)
                    addEdge(i, j);
            return;
        }
        int mid = (l + r) / 2;
        divide(l, mid);
        divide(mid + 1, r);

        std::list<Edge>::iterator it;
        int                       nowl = l, nowr = r;

        for (int update = 1; update;) {
            // find left and right convex, lower common tangent
            update    = 0;
            Point ptL = p[nowl], ptR = p[nowr];
            for (it = head[nowl].begin(); it != head[nowl].end(); it++) {
                Point  t = p[it->id];
                double v = cross(ptR, ptL, t);
                if (cmp(v) > 0 || (cmp(v) == 0 && ptR.dist2(t) < ptR.dist2(ptL))) {
                    nowl = it->id, update = 1;
                    break;
                }
            }
            if (update)
                continue;
            for (it = head[nowr].begin(); it != head[nowr].end(); it++) {
                Point  t = p[it->id];
                double v = cross(ptL, ptR, t);
                if (cmp(v) < 0 || (cmp(v) == 0 && ptL.dist2(t) < ptL.dist2(ptR))) {
                    nowr = it->id, update = 1;
                    break;
                }
            }
        }

        addEdge(nowl, nowr); // add tangent

        for (int update = 1; true;) {
            update    = 0;
            Point ptL = p[nowl], ptR = p[nowr];
            int   ch = -1, side = 0;
            for (it = head[nowl].begin(); it != head[nowl].end(); it++) {
                if (cmp(cross(ptL, ptR, p[it->id])) > 0 &&
                    (ch == -1 || inCircle(ptL, ptR, p[ch], p[it->id]) < 0)) {
                    ch = it->id, side = -1;
                }
            }
            for (it = head[nowr].begin(); it != head[nowr].end(); it++) {
                if (cmp(cross(ptR, p[it->id], ptL)) > 0 &&
                    (ch == -1 || inCircle(ptL, ptR, p[ch], p[it->id]) < 0)) {
                    ch = it->id, side = 1;
                }
            }
            if (ch == -1)
                break; // upper common tangent
            if (side == -1) {
                for (it = head[nowl].begin(); it != head[nowl].end();) {
                    if (intersection(ptL, p[it->id], ptR, p[ch])) {
                        head[it->id].erase(it->c);
                        head[nowl].erase(it++);
                    }
                    else {
                        it++;
                    }
                }
                nowl = ch;
                addEdge(nowl, nowr);
            }
            else {
                for (it = head[nowr].begin(); it != head[nowr].end();) {
                    if (intersection(ptR, p[it->id], ptL, p[ch])) {
                        head[it->id].erase(it->c);
                        head[nowr].erase(it++);
                    }
                    else {
                        it++;
                    }
                }
                nowr = ch;
                addEdge(nowl, nowr);
            }
        }
    }

    std::vector<std::pair<int, int>> getEdge() {
        std::vector<std::pair<int, int>> ret;
        ret.reserve(n);
        std::list<Edge>::iterator it;
        for (int i = 0; i < n; i++) {
            for (it = head[i].begin(); it != head[i].end(); it++) {
                if (it->id < i)
                    continue;
                ret.push_back(std::make_pair(p[i].id, p[it->id].id));
            }
        }
        return ret;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    return 0;
}