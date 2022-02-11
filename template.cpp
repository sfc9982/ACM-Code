#include <bits/stdc++.h>

using namespace std;

long long a[1000010];
long long n, m;
long long tmp, l = 0, r;

int main()
{

    scanf("%lld %lld", &n, &m);
    for (long long i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        if (a[i] > r)
            r = a[i];
    }
    while (l < r)
    {
        int mid = (l + r) >> 1;
        tmp = 0;
        for (int i = 0; i < n; i++)
            if (a[i] > mid)
                tmp += a[i] - mid;
        if (tmp < m)
            r = mid;
        else
            l = mid + 1;
    }

    printf("%lld", r - 1);
    return 0;
}