//
// Created by sfc9982 on 2022/02/09.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>

using namespace std;

long long a[400005];
long long b[400005];
long long sum[400005];

int main()
{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    while (~scanf("%d", &n))
    {
        for (int i = 0; i < n; i++)
            scanf("%lld", &a[i]);
        for (int i = 0; i < n; i++)
            scanf("%lld", &b[i]);
        sort(a, a + n);
        sort(b, b + n);
        for (int i = 0; i < n; i++)
            sum[i] = a[0] + b[i];

        make_heap(sum, sum + n, less<long long>());

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                long long t = b[j] + a[i];
                if (t > sum[0])
                    break;
                else
                {
                    pop_heap(sum, sum + n);
                    sum[n - 1] = t;
                    push_heap(sum, sum + n);
                }
            }
        }
        sort(sum, sum + n, less<long long>());
        for (int i = 0; i < n; i++)
            printf("%lld\n", sum[i]);
    }

    return 0;
}
