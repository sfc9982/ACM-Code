//
// Created by sfc9982 on 2022/5/10.
//

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    while (scanf("%s", s) != EOF)
    {
        int len = strlen(s);
        int sum = 0;
        for (int i = 0; i < len; i++)
        {
            if (isdigit(s[i]))
                sum += s[i] - '0';
            if (isalpha(s[i]))
                sum += s[i] - 'A';
        }
        printf("%d\n", sum);
    }
    return 0;
}