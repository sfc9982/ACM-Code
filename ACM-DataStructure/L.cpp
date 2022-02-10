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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, m, q;
    static int mat[1002][1002];
    static int dif[1002][1002];

    memset(dif, 0, sizeof(dif));

    cin >> n >> m >> q;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> mat[i][j];
    for (int k = 1; k <= q; ++k)
    {
        int x1, y1, x2, y2, c;
        cin >> x1 >> y1 >> x2 >> y2 >> c;
        for (int i = x1; i <= x2; ++i)
        {
            dif[i][y1] += c;
            dif[i][y2 + 1] += -c;
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        int mod = 0;
        for (int j = 1; j <= m; ++j)
        {
            mod += dif[i][j];
            cout << mat[i][j] + mod << (j != m ? " " : "");
        }
        cout << endl;
    }
    return 0;
}