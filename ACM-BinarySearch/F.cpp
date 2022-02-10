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

int n, m, ans, l = 1, r;
int a[1000005];

bool valid(int k)
{
    long long d = 0;
    for (int i = 1; i <= n; i++)
        if (a[i] > k) d += a[i] - k;
    if (d >= m)
        return true;
    return false;
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > r)
            r = a[i];
    }
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (valid(mid))
        {
            ans = mid;
            l = mid + 1;
        } else r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}