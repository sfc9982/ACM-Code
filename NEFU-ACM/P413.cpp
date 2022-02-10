#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) != -1)
    {
        if (n < 0 || n > 100)
            printf("Score is error!\n");
        if (n >= 90 && n <= 100) printf("A\n");
        if (n >= 80 && n <= 89) printf("B\n");
        if (n >= 70 && n <= 79) printf("C\n");
        if (n >= 60 && n <= 69) printf("D\n");
        if (n >= 0 && n <= 59) printf("E\n");
    }
    return 0;
}
