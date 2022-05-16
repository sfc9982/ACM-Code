//
// Created by sfc9982 on 2022/5/15.
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

    long long T;
    cin >> T;
    while (T--)
    {
        long long a, b, n, m, h, w = 0;
        cin >> a >> b >> n >> m >> h;
        m -= (m / n) * (b - a);
        m -= (h - b) * (m / n);
        long long k = 1;
        long long cur = (m / n) * b;
        while (cur + k * b <= n + m)
        {
            if (cur + k * b == n + m)
                m++;
            k++;
            m -= (h - b);
        }
        w = m + n;
        cout << w << endl;
    }

    return 0;
}