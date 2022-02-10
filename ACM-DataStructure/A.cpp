//
// Created by sfc9982 on 2022/02/09.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <cmath>
#include <stack>

using namespace std;
stack<int> S;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int x, z;
    char y;
    cin >> x;
    int m = 10000;
    x = x % m;
    S.push(x);

    while (cin >> y >> z)
    {
        if (y == '*')
        {
            x = S.top();
            S.pop();
            S.push(x * z % m);
        } else
            S.push(z);
    }
    x = 0;
    while (S.size())
    {
        x += S.top();
        x %= m;
        S.pop();
    }
    cout << x << endl;
    return 0;
}
