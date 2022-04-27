//
// Created by sfc9982 on 2022/4/17.
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
    int k[5] = {0, 1, 3, 4, 5};
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j < 10 - i; j++)
            printf(" ");
        for (int j = 1; j <= k[i]; j++)
            printf("%c", 'A' + i - 1);
        printf("\n");
    }
    return 0;
}
