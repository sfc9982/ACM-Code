//
// Created by sfc9982 on 2022/02/15.
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
int f[200][200];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    string s;
    cin >> s;
    int len = (int) s.length();
    s = ' ' + s;
    memset(f, INF, sizeof(f));
    for (int i = 1; i <= len; i++)
        f[i][i] = 1;
    for (int k = 2; k <= len; k++)
    {
        for (int i = 1; i + k - 1 <= len; i++)
        {
            int j = i + k - 1;
            if (s[i] == s[j])
                f[i][j] = min(f[i + 1][j], f[i][j - 1]);
            else
                for (int k = i; k < j; k++)
                    f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j]);
        }
    }
    cout << f[1][len] << endl;
    return 0;
}
