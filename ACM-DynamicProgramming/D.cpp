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

int N, W, w0, v0;
int w[105], v[105], c[105];
int dp[50005];

void solve()
{
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= c[i]; j <<= 1)
        {
            w0 = j * w[i];
            v0 = j * v[i];
            for (int k = W; k >= w0; k--)
                dp[k] = max(dp[k], dp[k - w0] + v0);
            c[i] -= j;
        }
        if (c[i])
        {
            w0 = c[i] * w[i];
            v0 = c[i] * v[i];
            for (int k = W; k >= w0; k--)
                dp[k] = max(dp[k], dp[k - w0] + v0);
        }
    }
    printf("%d\n", dp[W]);
}

int main()
{
    while (scanf("%d%d", &N, &W) == 2)
    {
        for (int i = 1; i <= N; i++)
            scanf("%d%d%d", &w[i], &v[i], &c[i]);
        solve();
    }
    return 0;
}