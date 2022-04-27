//
// Created by sfc9982 on 2022/4/27.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int a, i = 1, p = -1;
    FILE *fp;
    fp = fopen("D:\\wj007.txt", "r");
    while (fscanf(fp, "%d", &a) != EOF)
    {
        if (i % 2 == 1)
        {
            if (a > p)
                p = a;
        }
        i++;
    }
    fclose(fp);
    printf("%d", p);
    return 0;
}