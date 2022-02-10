//
// Created by sfc9982 on 2022/02/09.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

bool maps[105][105];
vector<int> best;
vector<int> now;
int ans;
int n, m;

void dfs(int pos)
{
    if (pos == n + 1)
    {
        if (now.size() > best.size())
        {
            best = now;
            ans = 1;
        } else if (now.size() == best.size())
        {
            best = now;
            ans++;
        }
        return;
    }
    bool flag = true;
    for (int i = 0; i < now.size(); i++)
    {
        int nxt = now[i];
        if (!maps[pos][nxt])
        {
            flag = false;
            break;
        }
    }
    if (now.size() + (n - pos) >= best.size())
    {
        if (flag)
        {
            now.push_back(pos);
            dfs(pos + 1);
            now.pop_back();
        }
        dfs(pos + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    memset(maps, 0, sizeof(maps));
    while (cin >> n >> m)
    {
        now.clear();
        best.clear();
        for (int i = 1; i <= m; i++)
        {
            int u, v;
            cin >> u >> v;
            maps[u][v] = 1;
            maps[v][u] = 1;
        }
        dfs(1);
        cout << best.size() << endl;
    }
    return 0;
}
