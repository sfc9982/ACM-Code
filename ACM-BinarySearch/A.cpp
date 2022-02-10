//
// Created by sfc9982 on 2022/02/10.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>


int n, k;
int a[10005];

inline int read()
{
    int s = 0;
    char ch = getchar();
    while (!isdigit(ch)) ch = getchar();
    while (isdigit(ch))
    {
        s = (s << 1) + (s << 3) + ch - '0';
        ch = getchar();
    }
    return s;
}

bool valid(int x)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += a[i] / x;
    return sum >= k;
}

int main()
{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr), cout.tie(nullptr);
    while (~scanf("%d %d", &n, &k))
    {
        int l = 0, r = 10000000, mid;
        for (int i = 1; i <= n; i++)
        {
            a[i] = read();
        }
        while (r - l > 0)
        {
            mid = (l + r + 1) / 2;
            if (valid(mid))
                l = mid;
            else
                r = mid - 1;
        }
//        if (!valid(l))
//        {
//            while (!valid(l - 1))
//                --l;
//            --l;
//        } else
//        {
//            while (valid(l + 1))
//                ++l;
//        }
        printf("%d\n", l);
    }
    return 0;
}
