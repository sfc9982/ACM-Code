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

int fa[200050], maxv[200050];

inline int find(int x)
{
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
    {
        fa[i] = i;
        maxv[i] = -1;
    }
    for (int i = 1; i <= m; i++)
    {
        int op;
        cin >> op;
        switch (op)
        {
            case 0:
            {
                int l, r, v;
                cin >> l >> r >> v;
                if (!v)
                {
                    l = find(l - 1);
                    for (int j = find(r); j != l; j = find(j - 1))
                    {
                        maxv[l] = max(maxv[l], maxv[j]);
                        fa[j] = l;
                    }
                }
                else
                {
                    r = find(r);
                    maxv[r] = max(maxv[r], l - 1);
                }
                break;
            }
            case 1:
            {
                int x;
                cin >> x;
                cout << (fa[x] == x ? maxv[x] != -1 && find(maxv[x]) == find(x - 1) ? "YES\n" : "N/A\n" : "NO\n");
                break;
            }
            default:;
        }
    }
    return 0;
}