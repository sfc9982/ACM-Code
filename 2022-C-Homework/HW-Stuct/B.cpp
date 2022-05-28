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

    // complex number multiplication
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << fixed << setprecision(2) << a * c - b * d << " " << a * d + b * c << endl;


    return 0;
}