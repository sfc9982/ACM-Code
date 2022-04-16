//
// Created by sfc9982 on 2022/03/31.
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

struct Edge {
    int p, dist;
};

vector<Edge> e[20010];

int n, m, dist[100010], color[20010];

void dfs(int a, int b, int c)
{
    if (color[a] != 0)
        return;
    color[a] = b;
    int len = e[a].size();
    for (int i = 0; i < len; i++)
        if (e[a][i].dist > c && color[e[a][i].p] == 0)
            dfs(e[a][i].p, b * -1, c);
}
bool valid(int c)
{
    memset(color, 0, sizeof(color));
    for (int i = 1; i <= n; i++)
        dfs(i, 1, c);
    for (int i = 1; i <= n; i++)
    {
        int len = e[i].size();
        for (int j = 0; j < len; j++)
            if (e[i][j].dist > c && color[i] == color[e[i][j].p])
                return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    int x, y, c;
    Edge t;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y >> c;
        t.dist = c;
        t.p = y;
        e[x].push_back(t);
        t.p = x;
        e[y].push_back(t);
        dist[i] = c;
    }
    sort(dist + 1, dist + m + 1);
    int l = 0, r = m, mid;
    while (l < r)
    {
        mid = (l + r) / 2;
        if (!valid(dist[mid]))
            l = mid + 1;
        else
            r = mid;
    }
    cout << dist[r] << endl;
    return 0;
}