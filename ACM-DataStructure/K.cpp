//
// Created by sfc9982 on 2022/02/10.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, m;
    static int a[100005];
    int diff[100005];

    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= m; ++i)
    {
        int l, r, c;
        cin >> l >> r >> c;
        diff[l] += c;
        diff[r + 1] += -c;
    }
    int mod = 0;
    for (int i = 1; i <= n; ++i)
    {
        mod += diff[i];
        cout << a[i] + mod << (i != n ? " " : "");
    }
    cout << endl;
    return 0;
}