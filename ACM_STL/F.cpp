//
// Created by sfc9982 on 2022/02/08.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

map<string, bool> flag;

int main()
{
    string s;
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        if (!flag[s])
        {
            flag[s] = true;
            ++cnt;
        }
    }
    cout << cnt << endl;
    return 0;
}