//
// Created by sfc9982 on 2022/5/10.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct xq {
    int r; //半径
    int s; //距离
} xq;

xq a[101], b[101];

int cmp_s(const void *_a, const void *_b)
{
    int &pre_s = ((xq *) _a)->s, &nxt_s = ((xq *) _b)->s;
    return pre_s < nxt_s ? -1 : pre_s > nxt_s;
}

int cmp_r(const void *_a, const void *_b)
{
    int &pre_r = ((xq *) _a)->r, &nxt_r = ((xq *) _b)->r;
    return pre_r > nxt_r ? -1 : pre_r < nxt_r;
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        for (int i = 0; i < n; i++)
            scanf("%d %d", &a[i].r, &a[i].s);
        memcpy(b, a, sizeof(a));
        qsort(a, n, sizeof(xq), cmp_s);
        qsort(b, n, sizeof(xq), cmp_r);
        if (memcmp(a, b, sizeof(xq)) == 0)
            printf("%d %d\n", a[0].r, a[0].s);
        else
            printf("NO\n");
    }
    return 0;
}