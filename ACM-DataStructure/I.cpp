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

int fa[1005];

int find(int x)
{
    int a;
    a = x;
    while (fa[a] != a)
    {
        a = fa[a];
    }
    return a;
}

void merge(int p, int q)
{
    int x, y;
    x = find(p);
    y = find(q);
    if (x != y)
        fa[x] = y;
}

int main()
{
    int n, m, x, y, sum;
    while (~scanf("%d%d", &n, &m) && n)
    {
        sum = 0;
        for (int i = 1; i <= n; i++)
            fa[i] = i;
        while (m--)
        {
            scanf("%d%d", &x, &y);
            merge(x, y);
        }
        for (int i = 1; i <= n; i++)
            if (fa[i] == i)
                sum++;
        printf("%d\n", sum - 1);
    }
    return 0;
}