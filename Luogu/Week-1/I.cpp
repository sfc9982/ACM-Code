//
// Created by sfc9982 on 2022/03/15.
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

const int INF = 0x3f3f3f3f;
long long n, k;
long long a[1000005];

bool valid(long long x)
{
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += a[i] / x;
    }
    return sum >= k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    long long l = 0, r = INF, mid;
    while (r - l > 1)
    {
        mid = (l + r) >> 1;
        if (valid(mid))
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << l << endl;
    return 0;
}