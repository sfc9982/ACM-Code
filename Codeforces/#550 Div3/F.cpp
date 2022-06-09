//
// Created by sfc9982 on 2022/6/9.
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

const int N = 200 * 1000 + 50;

int n, m;
vector<int> g[N];
vector<pair<int, int>> v;

bool flag;
vector<int> color;

void dfs(int v, int c)
{
    color[v] = c;
    for (auto to: g[v])
    {
        if (color[to] == -1)
        {
            dfs(to, c ^ 1);
        }
        else
        {
            if (color[to] == color[v])
            {
                flag = false;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;

    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;
        --x, --y;
        g[x].push_back(y);
        g[y].push_back(x);
        v.push_back(make_pair(x, y));
    }

    flag = true;
    color = vector<int>(n, -1);
    dfs(0, 0);

    if (!flag)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;
    for (int i = 0; i < m; ++i)
    {
        cout << (color[v[i].first] < color[v[i].second]);
    }
    cout << endl;

    return 0;
}