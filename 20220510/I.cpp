//
// Created by sfc9982 on 2022/5/15.
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

long long f[25];



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int k;
    cin >> k;

    cout <<(1 << (k - 1)) << endl;

    return 0;
}