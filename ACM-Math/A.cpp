//
// Created by sfc9982 on 2022/03/01.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>

using namespace std;

const int N = 4e7 + 1;
int prime[5000000];
bool b[N];
int cnt = 0, max1 = 1;

int init()
{
    memset(b, 1, sizeof(b));
    b[0] = b[1] = 0;
    for (int i = 2; i <= max1; i++)
    {
        if (b[i])
        {
            prime[++cnt] = i;

        }

        for (int j = 1; j <= cnt && prime[j] * i <= max1; j++)
        {
            b[prime[j] * i] = 0;
            if (i % prime[j] == 0) break;
        }


    }

    return 0;
}

int main()
{

    int n, q;
    scanf("%d%d", &n, &q);
    max1 = n;
    init();
    while (q--)
    {
        int k;
        scanf("%d", &k);
        printf("%d\n", prime[k]);
    }
    return 0;
}