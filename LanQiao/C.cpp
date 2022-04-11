//
// Created by sfc9982 on 2022/04/09.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

long long a[200005], pre[200005];

int main()
{
    int n;
    long long sum = 0;
    a[0] = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        pre[i] = pre[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        sum += a[i] * (pre[n] - pre[i]);
    }
    printf("%d", sum);
    return 0;
}