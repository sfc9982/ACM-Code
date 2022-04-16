#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[9][9];

    time_t t;
    srand((unsigned) time(&t));

    for (int i = 0; i < 9; ++i)
        for (int j = 0; j < 9; ++j)
            a[i][j] = rand() % 70 + 20;

    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int sum = 0;
    for (int i = 0; i < 9; ++i)
        for (int j = 0; j < 9; ++j)
            if (i == 0 || j == 0 || j == 8 || i == 8)
                sum += a[i][j];
    printf("周边元素之和：%d\n", sum);

    sum = 0;
    for (int i = 0; i < 9; ++i)
        for (int j = 0; j < 9; ++j)
            if (i == j)
                sum += a[i][j];
    printf("主对角线元素之和：%d\n", sum);

    sum = 0;
    for (int i = 0; i < 9; ++i)
        for (int j = 0; j < 9; ++j)
            if (i + j == 8)
                sum += a[i][j];
    printf("反对角线元素之和：%d\n", sum);

    return 0;
}