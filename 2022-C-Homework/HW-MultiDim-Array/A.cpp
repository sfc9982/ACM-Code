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

    int m, n;
    int a[100][100];

    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        double t = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[j][i];
            t += a[j][i];
        }
        cout << fixed << setprecision(2) << t / m << (i == n - 1 ? "\n" : " ");
    }
    cout << fixed << setprecision(2) << sum / (m * n) << flush;

    return 0;
}