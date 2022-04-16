//
// Created by sfc9982 on 2022/03/31.
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

int father[500050], pre[500050], num[500050], x, y, i, j, n, t, ans;
char s;

int f(int n)
{
    if (father[n] == n)
        return father[n];
    int x;
    x = f(father[n]);
    pre[n] += pre[father[n]];
    return father[n] = x;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> t;
    for (i = 1; i <= 30000; i++)
    {
        father[i] = i;
        pre[i] = 0;
        num[i] = 1;
    }
    for (int i = 1; i <= t; i++)
    {
        cin >> s >> x >> y;
        int fx = f(x);
        int fy = f(y);
        if (s == 'M')
        {
            pre[fx] += num[fy];
            father[fx] = fy;
            num[fy] += num[fx];
            num[fx] = 0;
        }
        if (s == 'C')
        {
            if (fx != fy)
                cout << -1 << endl;
            else
                cout << abs(pre[x] - pre[y]) - 1 << endl;
        }
    }
    return 0;
}