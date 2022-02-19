//
// Created by sfc9982 on 2022/02/15.
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
int pfx[256];
int f[256][256];

int dfs(int l, int r)
{
    if (l == r)
        return 0;
    if (f[l][r] != INF)
        return f[l][r];
    int k, ret = INF;
    for (k = l; k + 1 <= r; k++)
        ret = min(ret, dfs(l, k) + dfs(k + 1, r) + pfx[r] - pfx[l - 1]);
    f[l][r] = ret;
    return ret;
}

int main()
{
    int n, val;
    while (~scanf("%d", &n))
    {
        memset(pfx, 0, sizeof(pfx));
        memset(f, INF, sizeof(f));
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &val);
            pfx[i] = pfx[i - 1] + val;
        }
        printf("%d\n", dfs(1, n));
    }
    return 0;
}
