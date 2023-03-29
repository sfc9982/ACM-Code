//
// Created by sfc9982 on 2022/7/11.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <string>

using namespace std;

const int N = 200005;
int n;
double ans = 1e20;

struct point {
    double x, y;

    point(double x = 0, double y = 0)
        : x(x), y(y)
    {
    }
};

struct cmp_x {
    bool operator()(const point &a, const point &b) const
    {
        return a.x < b.x || (a.x == b.x && a.y < b.y);
    }
};

struct cmp_y {
    bool operator()(const point &a, const point &b) const
    {
        return a.y < b.y;
    }
};

inline void upd_ans(const point &a, const point &b)
{
    double dist = sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
    if (ans > dist)
        ans = dist;
}

point a[N];
std::multiset<point, cmp_y> s;

int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%lf%lf", &a[i].x, &a[i].y);
    std::sort(a, a + n, cmp_x());
    for (int i = 0, l = 0; i < n; i++)
    {
        while (l < i && a[i].x - a[l].x >= ans)
            s.erase(s.find(a[l++]));
        for (auto it = s.lower_bound(point(a[i].x, a[i].y - ans));
             it != s.end() && it->y - a[i].y < ans; it++)
            upd_ans(*it, a[i]);
        s.insert(a[i]);
    }
    printf("%.4lf", ans);
    return 0;
}