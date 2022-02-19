//
// Created by sfc9982 on 2022/02/14.
//

#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;
const int maxn = 1000000;
int dp[maxn];
int ans, n, x;

int main()
{
    while (~scanf("%d", &n))
    {
        dp[1] = 30005;
        ans = 1;
        int i, j;
        for (i = 1; i <= n; i++)
        {
            scanf("%d", &x);
            for (j = 1; j <= ans; j++)
            {
                if (x <= dp[j])
                {
                    dp[j] = x;
                    break;
                }
            }
            if (j > ans) dp[++ans] = x;
        }
        printf("%d\n", ans);
    }
    return 0;
}
