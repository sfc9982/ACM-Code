//
// Created by sfc9982 on 2022/5/10.
//

#include <stdio.h>

int a[100][100];

int main()
{
    int m, n, x, y;
    while (scanf("%d%d%d%d", &m, &n, &x, &y) != EOF)
    {
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        int sum = 0;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                if (i != x && j != y)
                    sum += a[i][j];
        printf("%d\n", sum);
    }
    return 0;
}
