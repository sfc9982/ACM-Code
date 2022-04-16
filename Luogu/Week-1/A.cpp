//
// Created by sfc9982 on 2022/03/14.
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

constexpr int N = static_cast<const int>(1e5 + 10);
const int INF = 0x3f3f3f3f;
int a[N], midv[N];

int n, m;

bool check(const int &x)
{
    for (int i = 1; i <= n; i++)
    {
        midv[i] = a[i] >= x;
        midv[i] += midv[i - 1];
    }

    for (int i = m; i <= n; i++)
    {
        int ct = midv[i] - midv[i - m];
        if (ct < m / 2 + 1)
            return false;
    }
    return true;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int l = 0, r = INF;
    int res = -1;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (check(mid))
        {
            res = mid;
            l = mid + 1;
        } else
            r = mid - 1;
    }
    cout << res << endl;
    return 0;
}