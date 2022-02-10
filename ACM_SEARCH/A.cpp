//
// Created by sfc9982 on 2022/02/09.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int m, n, cnt = 0;
int mapp[105][105];
int tx[8] = {0, 0, 1, -1, 1, -1, 1, -1};
int ty[8] = {1, -1, 0, 0, -1, 1, 1, -1};

void dfs(int x, int y)
{
    mapp[x][y] = 0;
    for (int i = 0; i <= 7; i++)
        if (mapp[x + tx[i]][y + ty[i]] == 1)
            dfs(x + tx[i], y + ty[i]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            char x;
            cin >> x;
            if (x == 'W')
                mapp[i][j] = 1;
            else
                mapp[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (mapp[i][j] == 1)
            {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout << cnt << endl;
    return 0;
}