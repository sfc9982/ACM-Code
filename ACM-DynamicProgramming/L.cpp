//
// Created by sfc9982 on 2022/02/19.
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int T, n, m;
    static int map[105][105], f[105][105];
    cin >> T;
    while (T--)
    {
        memset(f, 0, sizeof(f));
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> map[i][j];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                f[i][j] = max(f[i - 1][j], f[i][j - 1]) + map[i][j];
        cout << f[n][m] << endl;
    }
    return 0;
}