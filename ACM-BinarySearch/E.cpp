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

using namespace std;

int n, m, ans;
int a[510];
namespace sfc9982 {
    bool valid(int x)
    {
        int su = 0, an = 0;

        for (int i = n; i >= 1; i--)
        {
            if (i == 1) an++;
            if (su + a[i] <= x)
            {
                su += a[i];
            } else
            {
                an++;
                su = a[i];
            }
        }
        if (an <= m) return 1;
        return 0;
    }

    void print(int l, int r)
    {
        int ss = 0;
        for (int i = r; i >= l; i--)
        {
            if (ss + a[i] > ans)
            {
                print(l, i);
                printf("%d %d\n", i + 1, r);
                return;
            }
            ss += a[i];
        }
        printf("%d %d\n", 1, r);
    }

}

int main()
{
    scanf("%d %d", &n, &m);
    if (n == 0) return 0;
    int l = 0, r = 0, mid;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        r += a[i];
    }

    while (l <= r)
    {
        mid = (l + r) / 2;
        if (sfc9982::valid(mid))
        {
            ans = mid;
            r = mid - 1;
        } else
            l = mid + 1;
    }
    sfc9982::print(1, n);
    return 0;
}