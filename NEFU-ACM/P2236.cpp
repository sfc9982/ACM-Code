//
// Created by sfc9982 on 2022/01/06.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int vote[256];
    int n, x;
    while (cin >> n)
    {
        memset(vote, 0, sizeof(vote));
        for (int i = 0; i < n; ++i)
        {
            cin >> x;
            ++vote[x - 1];
        }
        sort(vote + 1, vote + 101, greater<int>());
        cout << vote[1] << endl;
    }
    return 0;
}