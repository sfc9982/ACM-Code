//
// Created by sfc9982 on 2022/02/10.
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
    double x, y, low, high, yy;
    yy = 0x3f3f3f3f;
    while (cin >> y)
    {
        low = -20;
        high = 20;
        while (fabs(y - yy) >= 1e-5)
        {
            x = (low + high) / 2;
            yy = 0.0001 * pow(x, 5) + 0.003 * pow(x, 3) + 0.5 * x - 3;
            if (yy > y) high = x;
            if (yy < y) low = x;
        }
        printf("%.4lf\n", x);
    }
    return 0;
}