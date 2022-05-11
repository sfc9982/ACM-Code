
#include <stdio.h>
#include <stdlib.h>

int js(int *p, int *x, int *y, int n)
{
    //start
    *x = -1;
    *y = 0x3f;
    for (int i = 0; i < n; i++)
    {
        if (*(p + i) > *x)
            *x = *(p + i);
        if (*(p + i) < *y)
            *y = *(p + i);
    }
    //end
}

int main()
{
    int data[100];
    int n, i, max, min;
    while (scanf("%d", &n) != -1)
    {
        for (i = 0; i < n; i++)
            scanf("%d", &data[i]);
        js(data, &max, &min, n);
        printf("%d %d\n", max, min);
    }
    return 0;
}
