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

int a[100005];

int main()
{
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= m; i++)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        for (int j = l; j <= r - 1; j++)
        {
            for (int k = j + 1; k <= r; k++)
            {
                if ((a[j] ^ a[k]) == x)
                {
                    printf("yes\n");
                    goto loop_end;
                }
            }
        }
        printf("no\n");
    loop_end:;
    }
    return 0;
}