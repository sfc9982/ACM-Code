//
// Created by sfc9982 on 2022/02/21.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

int H, W;
char map[105][105];
int op[105][105];

const int tx[] = {0, 1, 1, 1, 0, -1, -1, -1};
const int ty[] = {1, 1, 0, -1, -1, -1, 0, 1};

void Count()
{
    int ans = 0;
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (map[i][j] == '#')
                ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    H = 99, W = 92;
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            map[i][j] = getchar();
        }
        getchar();
    }
    int T = 1000;
    while (T--)
    {
        memset(op, 0, sizeof(op));
        for (int i = 1; i <= H; i++)
        {
            for (int j = 1; j <= W; j++)
            {
                if (map[i][j] == 'L' && map[i - 1][j] != '#' && map[i + 1][j] != '#' && map[i][j - 1] != '#' &&
                    map[i][j + 1] != '#' && map[i - 1][j - 1] != '#' && map[i + 1][j + 1] != '#' &&
                    map[i + 1][j - 1] != '#' && map[i - 1][j + 1] != '#')
                    op[i][j] = 2;
                else if (map[i][j] == '#')
                {
                    int tmp = 0;
                    for (int k = 0; k < 8; ++k)
                        if (map[i + tx[k]][j + ty[k]] == '#')
                            tmp++;
                    if (tmp >= 4)
                        op[i][j] = 1;

                }
            }
        }


        for (int i = 1; i <= H; i++)
        {
            for (int j = 1; j <= W; j++)
            {
                if (map[i][j] != '.')
                {
                    switch (op[i][j])
                    {
                        case 0:
                            break;
                        case 1:
                            map[i][j] = 'L';
                            break;
                        case 2:
                            map[i][j] = '#';
                            break;
                        default:;
                    }


                }
            }
        }
    }
    Count();
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            cout << map[i][j];
        }
        cout << endl;
    }
    return 0;
}