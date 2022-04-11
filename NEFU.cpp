#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *p, const void *q)
{
    return strcmp(*(char **) p, *(char **) q);
}
void sort1(char **pp, int n)
{
    //补充完成程序
    qsort(pp, n, sizeof(char *), cmp);
}
void output1(char *p[], int n)
{
    //补充完成程序
    for (int i = 0; i < n; i++)
        printf("%s\n", p[i]);
}
int main()
{
    void sort1(char **pp, int n);
    void output1(char *p[], int n);
    char str[50], *cp[20];
    int n, l, i;
    while (scanf("%d\n", &n) != EOF)
    {
        for (i = 0; i < n; i++)
        {
            gets(str);
            //start
            //在此写动态开辟并存储程序
            cp[i] = (char *) malloc(50 * sizeof(char));
            strcpy(cp[i], str);
            //end
        }
        sort1(cp, n);
        output1(cp, n);
    }
    return 0;
}