//
// Created by sfc9982 on 2022/03/24.
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

const int MOD = 10000;
stack<int> S;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int a, b;
    char op;

    cin >> a;
    a %= MOD;
    S.push(a);
    while (cin >> op >> b)
    {
        if (op == '*')
        {
            a = S.top();
            S.pop();
            S.push(a * b % MOD);
        }
        else
            S.push(b);
    }
    int res = 0;
    while (!S.empty())
    {
        res += S.top();
        res %= MOD;
        S.pop();
    }
    cout << res << endl;
    return 0;
}
