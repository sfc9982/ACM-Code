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

const int N = static_cast<const int>(1e5 + 5);
const long long MOD = 12345678910;
long long f[N] = {0};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, p = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;
        if (x == 0)
            p++;
        else
        {
            if (!f[p])
            {
                f[p - 1] = (f[p - 1] + 1) % MOD;
                f[p--] = 0;
            }
            else
            {
                f[p - 1] = (f[p - 1] + (f[p] << 1)) % MOD;
                f[p--] = 0;
            }
        }
    }
    cout << f[0] << endl;
    return 0;
}