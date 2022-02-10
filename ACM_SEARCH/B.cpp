//
// Created by sfc9982 on 2022/02/09.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;
char mapp[10][10];
int flag[10];
int n, k;
int sum, m;

void dfs(int cur)
{
    if (k == m)
    {
        sum++;
        return;
    }
    if (cur >= n)
        return;
    for (int j = 0; j < n; j++)
        if (flag[j] == 0 && mapp[cur][j] == '#')
        {
            flag[j] = 1;
            m++;
            dfs(cur + 1);
            flag[j] = 0;
            m--;
        }
    dfs(cur + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    while (cin >> n >> k && n != -1 && k != -1)
    {
        sum = m = 0;
        for (int i = 0; i < n; i++)
            cin >> mapp[i];
        memset(flag, 0, sizeof(flag));
        dfs(0);
        cout << sum << endl;
    }
    return 0;
}
