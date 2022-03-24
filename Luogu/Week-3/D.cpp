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

long long a[200001], bit[200001], f[200001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    function<long long(long long)> lowbit = [&](long long _x) {
        return _x & (-_x);
    };

    int n, T;
    long long x;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        bit[i] = lowbit(a[i]);
        f[i] = f[i - 1] + bit[i];
    }
    cin >> T;
    int p = 1;
    while (T--)
    {
        cin >> x;
        for (int i = p; i <= n; p = i++)
        {
            if (f[i] >= x)
            {
                cout << a[i] / bit[i] << endl;
                break;
            }
        }
    }
    return 0;
}