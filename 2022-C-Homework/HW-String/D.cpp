//
// Created by sfc9982 on 2022/5/28.
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

char a1[5000], b1[5000];
int a[5000], b[5000], c[5000], x;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));
    memset(c, 0, sizeof(c));
    cin >> a1 >> b1;
    int lena = strlen(a1), lenb = strlen(b1);
    for (int i = 0; i < lena; i++)
        a[lena - i] = a1[i] - 48;
    for (int i = 0; i < lenb; i++)
        b[lenb - i] = b1[i] - 48;
    for (int i = 0; i <= lena; i++)
    {
        x = 0;
        for (int j = 1; j <= lenb; j++)
        {
            c[i + j - 1] += a[i] * b[j] + x;
            x = c[i + j - 1] / 10;
            c[i + j - 1] %= 10;
        }
        c[i + lenb] = x;
    }
    int lenc = lena + lenb;
    while (c[lenc] == 0 && lenc > 1)
        lenc--;
    for (int i = lenc; i > 0; i--)
        printf("%d", c[i]);
    return 0;
}