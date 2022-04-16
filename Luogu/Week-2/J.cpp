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
int a[1005], b[1005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, m;
    cin >> m >> n;

    int ans = 0;
    int l = 0, r = 0;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (a[x] == 0)
        {
            ans++;
            r++;
            b[r] = x;
            a[x] = 1;
            if (r > m)
            {
                l++;
                a[b[l]] = 0;
            }
        }
    }
    cout << ans << endl;

    return 0;
}