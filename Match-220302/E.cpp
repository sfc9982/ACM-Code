//
// Created by sfc9982 on 2022/03/02.
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

    long long n, q;
    while ( cin >> q)
    {
        while (q--)
        {
            cin >> n;
            long long x = n % 4;
            if (x == 1)
            {
                cout << 1 << endl;
            } else if (x == 2)
            {
                cout << n + 1 << endl;

            } else if (x == 3)
            {
                cout << 0 << endl;
            } else if (x == 0)
            {
                cout << n << endl;
            }
        }
    }

    return 0;
}