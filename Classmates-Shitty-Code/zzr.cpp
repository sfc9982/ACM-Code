#include <stdio.h>
#include <stdlib.h>
#define LEN 100
int main()
{
    int compress(char array[], int count[]);
    char array[LEN];
    int count[LEN];
    int i;
    int tail; //count数组的有效最末下标
    while (scanf("%s", array) != -1)
    {
        tail = compress(array, count);
        for (i = 0; i < tail; i++)
            i < tail - 1 ? printf("%d ", count[i]) : printf("%d\n", count[i]);
    }
    return 0;
}
int compress(char array[], int count[])
{
    //start
    int i = 0, num = 0;
    for (int i = 0; i < LEN; i++)
        count[i] = 0;
    count[0] = 1;
    while (array[i] != '\0')
    {
        if (array[i] == array[i + 1])
        {
            count[num]++;
        }
        else
        {
            num++;
            count[num]++;
        }
        i++;
    }
    return num;
    //end
}