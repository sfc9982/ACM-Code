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

    // Find the number of times the string s1 appears in the string s2.
    string s1, s2;
    cin >> s2 >> s1;
    int n1 = s1.length();
    int n2 = s2.length();
    int ans = 0;

    for (int i = 0; i <= n2 - n1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n1; j++)
        {
            if (s2[i + j] != s1[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            ans++;
    }
    cout << ans << endl;
    return 0;
}