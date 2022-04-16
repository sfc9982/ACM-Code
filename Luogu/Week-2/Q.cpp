//
// Created by sfc9982 on 2022/03/23.
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

int n, f[30];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    f[0] = 1, f[1] = 1;
    cin >> n;
    for (int i = 2; i <= n; i++)
        for (int j = 0; j < i; j++)
            f[i] += f[j] * f[i - j - 1];
    cout << f[n] << endl;
    return 0;
}