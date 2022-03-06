//
// Created by sfc9982 on 2022/03/02.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>

using namespace std;

const int N = static_cast<const int>(1e5 + 1);
const int INF = 0x3f3f3f3f;
int n, m;
int a[N], s[N];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    function<bool(int)> check = [](int tar) {
        for (int i = 1; i <= n; i++)
        {
            s[i] = a[i] >= tar;
            s[i] += s[i - 1];
        }

        for (int i = m; i <= n; i++)
        {
            int ct = s[i] - s[i - m];
            if (ct < m / 2 + 1) return false;
        }
        return true;
    };

    cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int l = 0, r = INF;
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) >> 1;
        if (check(mid))
        {
            ans = mid;
            l = mid + 1;
        } else
            r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}