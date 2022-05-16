//
// Created by sfc9982 on 2022/5/15.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    cin >> n;
    // output yes when n is odd
    if (n % 2 == 1)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}