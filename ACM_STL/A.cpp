//
// Created by sfc9982 on 2022/02/08.
//

#include <iostream>
#include <algorithm>
#include <functional>
#include <map>
#include <cstring>

using namespace std;

string s[5050];

map<string, bool> valid;

int main()
{
    int n, m, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
//        memset(s, 0, sizeof(s));
        string res;
        cin >> m;
        for (int j = 0; j < m; ++j)
            cin >> s[j];
        s[m] = "";
        sort(s, s + m);
        int len = unique(s, s + m) - s;
        for (int j = 0; j <= len; ++j)
            res += s[j];
//        cout << res << endl;
        if (!valid[res])
        {
            valid[res] = true;
            ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}
