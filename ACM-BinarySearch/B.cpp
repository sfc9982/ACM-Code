//
// Created by sfc9982 on 2022/02/10.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

int main()
{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr), cout.tie(nullptr);

    int T;
    static int nest[100001];

    scanf("%d", &T);
    while (T--)
    {
        memset(nest, 0, sizeof(nest));
        int cnt = 0, t = 1;
        while (t != 0)
        {
            scanf("%d", &t);
            nest[t]++;
        }
        for (int i = 1; i <= 50000; i++)
            if (nest[i] == 1 && nest[2 * i] == 1)
                cnt++;
        printf("%d\n", cnt);
    }
    return 0;
}