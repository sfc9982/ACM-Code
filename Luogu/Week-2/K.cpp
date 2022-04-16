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

stack<int> S;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, sum;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        while (!S.empty() && S.top() <= x)
            S.pop();
        sum += (long long) S.size();
        S.push(x);
    }
    cout << sum << endl;
    return 0;
}