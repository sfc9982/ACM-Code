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

int a[100][100], b[100][100];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    // calculate multiplication of two matrices
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    if (n == 0 || m == 0 || p == 0 || q == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    if (m != p)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            cin >> b[i][j];
    int c[100][100];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < q; j++)
            c[i][j] = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < q; j++)
            for (int k = 0; k < m; k++)
                c[i][j] += a[i][k] * b[k][j];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
            cout << c[i][j] << (j == q - 1 ? '\n' : ' ');
    }

    return 0;
}