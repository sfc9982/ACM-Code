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

int dp[1000][1000];
int w[1000], v[1000];
int a[1000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> w[i] >> v[i];
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= m; j++)
            if (w[i] <= j)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            else
                dp[i][j] = dp[i - 1][j];
    int t = m;
    for (int i = n; i >= 1; i--)
    {
        if (dp[i][t] > dp[i - 1][t])
        {
            a[i] = 1;
            t -= w[i];
        }
    }
    bool head = true;
    for (int i = 1; i <= n; i++)
        if (a[i])
        {
            cout << (head ? "" : " ") << i;
            head = false;
        }
    cout << endl
         << dp[n][m] << endl;
    return 0;
}
