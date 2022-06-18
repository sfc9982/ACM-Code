//
// Created by sfc9982 on 2022/6/9.
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


int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(nullptr), cout.tie(nullptr);

    int n, x;
    int ax1, ay1, ax2, ay2;

    cin >> n;
    for (i = 1; i < n; i++)
    {
        printf("? 1 1 %d %d\n", n, i);
        fflush(stdout);
        scanf("%d", &x);
        if (x % 2 == 1)
            break;
    }
    if (i != n)
    {
        for (j = n; j > 1; j--)
        {
            printf("? 1 %d %d %d\n", j, n, n);
            fflush(stdout);
            scanf("%d", &x);
            if (x % 2 == 1)
                break;
        }
        int l = 1, r = n;
        while (l < r)
        {
            int mid = (l + r + 1) >> 1;
            printf("? %d %d %d %d\n", mid, i, n, i);
            fflush(stdout);
            scanf("%d", &x);
            if (x % 2 == 1)
                l = mid;
            else
                r = mid - 1;
        }
        ax1 = l, ay1 = i;
        l = 1, r = n;
        while (l < r)
        {
            int mid = (l + r + 1) >> 1;
            printf("? %d %d %d %d\n", mid, j, n, j);
            fflush(stdout);
            scanf("%d", &x);
            if (x % 2 == 1)
                l = mid;
            else
                r = mid - 1;
        }
        ax2 = l, ay2 = j;
    }
    else
    {
        for (i = 1; i < n; i++)
        {
            printf("? 1 1 %d %d\n", i, n);
            fflush(stdout);
            scanf("%d", &x);
            if (x % 2 == 1)
                break;
        }
        for (j = n; j > 1; j--)
        {
            printf("? %d 1 %d %d\n", j, n, n);
            fflush(stdout);
            scanf("%d", &x);
            if (x % 2 == 1)
                break;
        }
        int l = 1, r = n;
        while (l < r)
        {
            int mid = (l + r + 1) >> 1;
            printf("? %d %d %d %d\n", i, mid, i, n);
            fflush(stdout);
            scanf("%d", &x);
            if (x % 2 == 1)
                l = mid;
            else
                r = mid - 1;
        }
        ax1 = i, ay1 = l;
        l = 1, r = n;
        while (l < r)
        {
            int mid = (l + r + 1) >> 1;
            printf("? %d %d %d %d\n", j, mid, j, n);
            fflush(stdout);
            scanf("%d", &x);
            if (x % 2 == 1)
                l = mid;
            else
                r = mid - 1;
        }
        ax2 = j, ay2 = l;
    }
    printf("! %d %d %d %d\n", ax1, ay1, ax2, ay2);
    return 0;
}