
//
// Created by sfc9982 on 2022/4/28.
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

    // Giving x degree sequence of no direction diagram, determine whether it can constitute an universe diagram
    int n, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }
    if ((sum & 1) == 1)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
    return 0;
}