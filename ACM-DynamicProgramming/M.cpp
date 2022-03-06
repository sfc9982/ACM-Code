//
// Created by sfc9982 on 2022/02/20.
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

const int INF = 0x3f3f3f3f;
int a[1005], b[1005];
int f[1005][6 * 1005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
        sum += (a[i] + b[i]);
    }
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= 6 * n; j++)
            f[i][j] = INF;
    f[1][b[1]] = 1;
    f[1][a[1]] = 0;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= 6 * n; j++)
        {
            if (j >= a[i])
                f[i][j] = min(f[i][j], f[i - 1][j - a[i]]);
            if (j >= b[i])
                f[i][j] = min(f[i][j], f[i - 1][j - b[i]] + 1);
        }
    }
    int minn = INF, ans = INF;
    for (int i = 0; i <= sum; i++)
    {
        if (f[n][i] != INF)
        {
            if (abs(i - (sum - i)) < minn)
            {
                minn = abs(i - (sum - i));
                ans = f[n][i];
            } else if (abs(i - (sum - i)) == minn)
                ans = min(ans, f[n][i]);
        }
    }
    cout << ans << endl;
    return 0;
}