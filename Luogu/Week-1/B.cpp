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

long long n, m;
long long a[1000];
int x[1000], y[1000];

bool check(int s)
{
    int num = 1, t = 0;
    for (int i = n; i >= 1; i--)
    {
        if (t + a[i] > s)
        {
            t = 0;
            num++;
        }
        t += a[i];
    }
    return num <= m;
}

int find(int l, int r)
{
    int mid;
    while (l + 1 < r)
    {
        mid = l + (r - l) / 2;
        if (check(mid))
            r = mid;
        else
            l = mid;
    }
    return r;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    long long L = 0, R = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        R += a[i];
        L = max(L, a[i]);
    }
    int s = find(L, R);
    int t = 0, num = 1;
    for (int i = 1; i <= m; i++)
        x[i] = y[i] = 0;

    y[1] = n;
    for (int i = n; i >= 1; i--)
    {
        if (t + a[i] > s)
        {
            t = 0;
            x[num] = i + 1;
            y[++num] = i;
        }
        t += a[i];
    }
    x[num] = 1;

    for (int i = m; i >= 1; i--)
        cout << x[i] << " " << y[i] << endl;
    return 0;
}