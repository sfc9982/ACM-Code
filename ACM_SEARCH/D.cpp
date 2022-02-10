#pragma GCC optimize(2)
//
// Created by sfc9982 on 2022/02/09.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <cmath>


using namespace std;

int a[1001];
bool dp[34][990000];

int main()
{
    memset(dp, 0, sizeof dp);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= k; j++)
        {
            dp[i][j] |= dp[i - 1][j];
            if (j >= a[i])
                dp[i][j] |= dp[i - 1][j - a[i]];
        }
    if (dp[n][k])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
