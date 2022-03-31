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

int n, m;
int x, y, z;
int fa[10050];

int find(int x)
{
    int rt = x;
    while (fa[rt] != 0)
        rt = fa[rt];
    while (rt != x)
    {
        int tmp = fa[x];
        fa[x] = rt;
        x = tmp;
    }
    return rt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> z >> x >> y;
        int p = find(x), q = find(y);
        if (z == 1)
        {
            if (p != q)
                fa[q] = p;
        }
        else if (z == 2)
        {
            if (p == q)
                cout << "Y" << endl;
            else
                cout << "N" << endl;
        }
    }
    return 0;
}