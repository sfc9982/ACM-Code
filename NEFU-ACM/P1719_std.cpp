#include <iostream>
#include <cstring>
#include <algorithm>
#include <stack>

using namespace std;
int n, k, mx, cnt, a[210], dp[210], ans[210];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[i] = 1;
    }
    cnt = mx = 0;
    k = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i - 1; j++)
        {
            if (a[j] < a[i])dp[i] = max(dp[j] + 1, dp[i]);
            if (dp[i] > mx)
            {
                mx = dp[i];
                k = i;
            }
        }
    printf("max=%d\n", mx);
    ans[++cnt] = a[k];
    for (int i = mx - 1; i >= 1; i--)
        for (int j = 1; j <= n; j++)
        {
            if (dp[j] == i && a[j] < ans[cnt])
            {
                ans[++cnt] = a[j];
                break;
            }
        }
    for (int i = cnt; i >= 1; i--)
        printf("%d ", ans[i]);
    return 0;
}