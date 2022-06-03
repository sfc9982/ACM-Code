//
// Created by sfc9982 on 2022/02/21.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int map[105][105];
int flag[105][105];
int dep = 0;
int ans[20005];
int id         = 0;
const int tx[] = {0, 1, 0, -1};
const int ty[] = {1, 0, -1, 0};
int H = 100, W = 100;

void bfs(int x, int y)
{
    if (map[x][y] == 9 || x < 1 || x > H || y < 1 || y > W) return;
    flag[x][y] = id;
    for (int k = 0; k < 4; ++k)
    {
        if (map[x + tx[k]][y + ty[k]] > map[x][y])
        {
            bfs(x + tx[k], y + ty[k]);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int sum = 0;
    memset(map, 0, sizeof(map));
    memset(flag, false, sizeof(flag));
    memset(ans, false, sizeof(ans));

    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++) { map[i][j] = getchar() - '0'; }
        getchar();
    }
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            id++;
            if (map[i][j] != 9 && flag[i][j] == 0) bfs(i, j);
        }
    }
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            cout << setw(6) << flag[i][j];
            ans[flag[i][j]]++;
        }
        cout << endl;
    }
    sort(ans + 1, ans + H * W + 1, greater<>());
    cout << ans[1] << " " << ans[2] << " " << ans[3] << endl;
    return 0;
}