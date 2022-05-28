//
// Created by sfc9982 on 2022/5/28.
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    string s;
    cin >> s;
    int n = s.length();
    int ans = 0;
    int two = 0, zero = 0, one = 0, six = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '2')
            two++;
        else if (s[i] == '0')
            zero++;
        else if (s[i] == '1')
            one++;
        else if (s[i] == '6')
            six++;
    }
    ans = min(two, min(zero, min(one, six)));
    cout << ans << endl;
    return 0;
}