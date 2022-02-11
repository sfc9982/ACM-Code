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
    int mid;
    while (l < r)
    {
        int mid = (l + r) >> 1;
        tmp = 0;
        for (int i = 0; i < n; i++)
            if (a[i] > mid)
                tmp += a[i] - mid;
        if (tmp <= m)
            r = mid;
        else
            l = mid + 1;
    }
    while (true)
    {
        tmp = 0;
        for (int i = 0; i < n; i++)
            if (a[i] > r)
                tmp += a[i] - r;
        if (tmp >= m)
        {
            break;
        }
        r--;
    }
    while (true)
    {
        tmp = 0;
        for (int i = 0; i < n; i++)
            if (a[i] > r)
                tmp += a[i] - r;
        if (tmp < m)
        {
            r--;
            break;
        }
        r++;
    }

    printf("%lld", r);
    return 0;
}