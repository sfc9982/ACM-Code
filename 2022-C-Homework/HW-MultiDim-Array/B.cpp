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
    int num[100][100];

    cin >> n;
    int k = ceil((double) n / 2);
    for (int j = k; j > 0; j--)
    {
        for (int i = 0; i < n; i++)
        {
            num[j - 1][i] = j;
            num[n - j][i] = j;
            num[i][j - 1] = j;
            num[i][n - j] = j;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num[i][j] << (j == n - 1 ? "\n" : " ");
        }
    }
    return 0;
}