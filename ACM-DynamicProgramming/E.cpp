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

int m, n;
int w[50], c[50], p[50];
int f[256];

int main()
{
    scanf("%d %d", &m, &n);
    for (int i = 1; i <= n; i++)
        scanf("%d %d %d", &w[i], &c[i], &p[i]);
    for (int i = 1; i <= n; i++)
        if (p[i] == 0)
            for (int j = w[i]; j <= m; j++)
                f[j] = max(f[j], f[j - w[i]] + c[i]);
        else
            for (int j = 1; j <= p[i]; j++)
                for (int k = m; k >= w[i]; k--)
                    f[k] = max(f[k], f[k - w[i]] + c[i]);
    printf("%d", f[m]);
    return 0;
}