#include <stdio.h>

int fib(int x) // x=10
{
    if (x == 1 || x == 2)
        return 1;
    return fib(x - 1) + fib(x - 2);
}

int main()
{
    printf("%d", fib(10));
    return 0;
}
