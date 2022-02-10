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


int a[20][20], sx, sy, tx, ty, m, n;
bool flag = true;
int dx[4] = {0, -1, 0, 1}, dy[4] = {-1, 0, 1, 0};

struct Path {
    int x, y;
} cur[5000];

void dfs(int x, int y, int pos)
{
    if (x == tx && y == ty)
    {
        for (int i = 0; i < pos; i++)
            printf("(%d,%d)->", cur[i].x, cur[i].y);
        printf("(%d,%d)\n", x, y);
        flag = false;
        return;
    }
    cur[pos].x = x, cur[pos].y = y;
    for (int i = 0; i < 4; i++)
    {
        if (a[x + dx[i]][y + dy[i]] == 1 && 1 <= x + dx[i] <= m && 1 <= y + dy[i] <= n)
        {
            a[x][y] = 0;
            dfs(x + dx[i], y + dy[i], pos + 1);
            a[x][y] = 1;
        }
    }

}


int main()
{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr), cout.tie(nullptr);
    while (scanf("%d%d", &m, &n) != EOF)
    {
        for (int i = 1; i <= m; i++)
            for (int j = 1; j <= n; j++)
                scanf("%d", &a[i][j]);
        scanf("%d%d", &sx, &sy);
        scanf("%d%d", &tx, &ty);
        dfs(sx, sy, 0);
        if (flag)
            printf("-1\n");
    }
    return 0;
}