//
// Created by sfc9982 on 2022/03/23.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int n;
int a[3000005], f[3000005];
stack<int> S;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = n; i >= 1; i--)
    {
        while (!S.empty() && a[S.top()] <= a[i])
            S.pop();
        f[i] = S.empty() ? 0 : S.top();
        S.push(i);
    }
    for (int i = 1; i <= n; i++)
        cout << f[i] << " ";
    return 0;
}