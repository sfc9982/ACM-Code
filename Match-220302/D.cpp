//
// Created by sfc9982 on 2022/03/02.
//
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;
bool f[100005], g[1000005];

int main()
{
    int n, sum;
    cin >> n;
    int w;
    sum = 0;
    while (n--)
    {
        cin >> w;
        sum += w;
        memset(g, false, sizeof(g));
        for (int i = 1; i <= sum; i++)
        {
            if (f[i])
            {
                g[i + w] = true;
                g[abs(i - w)] = true;
            }
        }
        f[w] = true;
        for (int i = 1; i <= sum; i++)
            if (g[i])
                f[i] = true;
    }
    int ans = 0;
    for (int i = 1; i <= sum; i++)
        ans += f[i];
    cout << ans << endl;
    return 0;
}