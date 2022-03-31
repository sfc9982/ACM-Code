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

int nxt[1000005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        nxt[i] = i + 1;
    nxt[n] = 1;
    int p = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < m; j++)
            p = nxt[p];
        cout << nxt[p] << " ";
        nxt[p] = nxt[nxt[p]];
    }
    return 0;
}