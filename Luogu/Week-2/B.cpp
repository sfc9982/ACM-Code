//
// created by sfc9982 on 2022/03/23.
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

long long a[200001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    long long n, c, ans = 0;

    cin >> n >> c;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
        ans += upper_bound(a + 1, a + n + 1, a[i] + c) - a - (lower_bound(a + 1, a + n + 1, a[i] + c) - a);
    cout << ans;
    return 0;
}