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

int flag(int arr[], int x, int t)
{
    int l = 0, r = t - 1, mid;
    while (r >= l)
    {
        mid = (l + r) / 2;
        if (x < arr[mid])
            r = mid - 1;
        else if (x > arr[mid])
            l = mid + 1;
        else return mid;
    }
    return -1;
}

int a[1000001];

int main()
{
    int n, k, q, flag = 0;
    while (~scanf("%d %d", &n, &q))
    {
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < q; i++)
        {
            scanf("%d", &k);
            int l = 0, r = n - 1, mid;
            while (l <= r)
            {
                flag = -1;
                mid = (l + r) >> 1;
                if (k < a[mid])
                    r = mid - 1;
                else if (k > a[mid])
                    l = mid + 1;
                else
                {
                    flag = mid;
                    break;
                }
            }
            if (flag != -1)
                printf("no\n");
            else
                printf("YES\n");
        }
    }
    return 0;
}
