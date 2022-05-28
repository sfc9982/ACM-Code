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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    int a[100][100];
    memset(a, 0, sizeof(a));
    cin >> n;
    int x = 0, y = n - 1;
    for (int i = 1; i <= n * n; ++i)
    {
        a[x][y] = i;
        if (x + 1 < n && y + 1 < n)
            x++, y++;
        else if (x + 1 >= n)
        {
            x = n - y;
            y = 0;
        }
        else if (y + 1 >= n)
        {
            y = n - x - 2;
            x = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << (j == n - 1 ? "\n" : " ");
        }
    }
    return 0;
}