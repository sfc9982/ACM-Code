//
// Created by sfc9982 on 2022/4/13.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int    n, m, A, B;
double dis[2010];
bool   mark[2010];
struct Node {
    int    Num;
    double dis;
    bool   operator<(const Node &a) const {
        return a.dis > dis;
    }
};
struct node {
    int    Num;
    double dis;
};
vector<node> G[2010];
inline void  Dij() {
    priority_queue<Node> q;
    Node                 temp;
    temp.Num = A;
    temp.dis = 1;
    q.push(temp);
    while (!q.empty()) {
        int u = q.top().Num;
        q.pop();
        if (mark[u] == 1)
            continue;
        mark[u] = 1;
        for (int i = 0; i < G[u].size(); i++) {
            int    v = G[u][i].Num;
            double l = G[u][i].dis;
            if (mark[v] == 0 && dis[v] < dis[u] * l) {
                dis[v]   = dis[u] * l;
                temp.Num = v;
                temp.dis = dis[v];
                q.push(temp);
            }
        }
    }
}
int main() {
    node temp;
    scanf("%d%d", &n, &m);
    memset(dis, -0x3f, sizeof(dis));
    for (int i = 1; i <= m; i++) {
        int    x, y;
        double z;
        scanf("%d%d%lf", &x, &y, &z);
        temp.Num = y;
        temp.dis = 1 - z / 100;
        G[x].push_back(temp);
        temp.Num = x;
        G[y].push_back(temp);
    }
    scanf("%d%d", &A, &B);
    dis[A] = 1;
    Dij();
    printf("%.8lf", 100 / dis[B]);
    return 0;
}