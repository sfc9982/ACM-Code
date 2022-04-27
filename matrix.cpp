//
// Created by sfc9982 on 2022/4/24.
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

    //turn a matrix 90 degree clockwise
    int n;
    cin >> n;
    int a[10][10];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    int b[10][10];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            b[j][n - i - 1] = a[i][j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }

    return 0;
}