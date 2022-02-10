//
// Created by sfc9982 on 2022/02/09.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <queue>

using namespace std;

int n, m, k;
bool flag[40][40][40];
char mapp[40][40][40];
const int dir[6][3] = {{0,  0,  1},
                       {0,  0,  -1},
                       {0,  1,  0},
                       {0,  -1, 0},
                       {1,  0,  0},
                       {-1, 0,  0}};
int sx, sy, sz, ex, ey, ez;

struct node {
    int x, y, z, step;
} cur, nxt;

int bfs()
{
    memset(flag, false, sizeof(flag));
    queue<node> Q;
    cur.x = sx, cur.y = sy, cur.z = sz;
    cur.step = 0;
    flag[sx][sy][sz] = true;
    Q.push(cur);
    while (!Q.empty())
    {
        cur = Q.front();
        Q.pop();
        if (cur.x == ex && cur.y == ey && cur.z == ez)
            return cur.step;
        for (auto &i: dir)
        {
            nxt.x = cur.x + i[0], nxt.y = cur.y + i[1], nxt.z = cur.z + i[2];
            if (nxt.x >= 1 && nxt.x <= n && nxt.y >= 1 && nxt.y <= m && nxt.z >= 1 && nxt.z <= k &&
                mapp[nxt.x][nxt.y][nxt.z] != '#' &&
                !flag[nxt.x][nxt.y][nxt.z])
            {
                flag[nxt.x][nxt.y][nxt.z] = true;
                nxt.step = cur.step + 1;
                Q.push(nxt);
            }
        }
    }
    return 0;
}

int main()
{
    while (~scanf("%d %d %d", &n, &m, &k))
    {
        if (n == 0 && m == 0 && k == 0)
            break;
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= m; ++j)
                for (int p = 1; p <= k; ++p)
                {
                    scanf(" %c", &mapp[i][j][p]);
                    if (mapp[i][j][p] == 'S')
                        sx = i, sy = j, sz = p;
                    if (mapp[i][j][p] == 'E')
                        ex = i, ey = j, ez = p;
                }
        if (bfs())
            printf("Escaped in %d minute(s).\n", bfs());
        else
            printf("Trapped!\n");
    }
    return 0;
}
