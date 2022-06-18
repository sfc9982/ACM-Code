//
// Created by sfc9982 on 2022/6/9.
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

    int n, t, s, d;
    pair<int, int> v = {0x3f3f3f3f, -1};

    cin >> n >> t;

    for (int i = 1; i <= n; i++)
    {
        cin >> s >> d;
        while (s < t)
        {
            s += d;
        }
        v = min(pair<int, int>(s, i), v);
    }

    cout << v.second << endl;

    return 0;
}