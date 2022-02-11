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

int n, win, ans = 0;
int a[101];

int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &win);
    ans = 0;

    int l = 1, r = n, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] == win)
        {
            ans = mid;
            break;
        }
        if (win < a[mid])
            r = mid - 1;
        if (win > a[mid])
            l = mid + 1;
    }
    printf("%d\n", ans);
    return 0;
}

