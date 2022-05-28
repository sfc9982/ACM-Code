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

string s[100];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    while (cin >> n)
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        for (int i = 0; i < n; i++)
        {
            getline(cin, s[i]);
        }
        sort(s, s + n, [](const string &a, const string &b) {
            return a.compare(b) < 0;
        });
        for (int i = 0; i < n; i++)
        {
            cout << s[i] << endl;
        }
    }
    return 0;
}