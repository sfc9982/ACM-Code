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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    const int          INF  = 0x3f3f3f3f;
    const int          tx[] = {0, 1, 0, -1};
    const int          ty[] = {1, 0, -1, 0};
    int                n    = 100;
    unsigned long long sum  = 0;
    static int         map[105][105];

    memset(map, INF, sizeof(map));
    for (int i = 1; i <= 100; i++) {
        for (int j = 1; j <= 100; j++) {
            map[i][j] = getchar() - '0';
        }
        getchar();
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (map[i][j] < map[i - 1][j] && map[i][j] < map[i + 1][j] && map[i][j] < map[i][j - 1] &&
                map[i][j] < map[i][j + 1]) {
                //                for (int k = 0; k < 4; k++)
                //                {
                //                    if (map[i + ty[k]][j + tx[k]] != INF)
                //                    {
                //                        sum += map[i + ty[k]][j + tx[k]];
                //                    }
                //                }
                sum += map[i][j] + 1;
            }
        }
    }
    cout << sum << flush;
    return 0;
}