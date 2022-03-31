//
// Created by sfc9982 on 2022/03/31.
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

int n;

vector<int> a;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        a.insert(upper_bound(a.begin(), a.end(), x), x);
        if (i % 2 == 1)
            cout << a[static_cast<unsigned long long int>((i - 1) / 2)] << endl;
    }
    return 0;
}