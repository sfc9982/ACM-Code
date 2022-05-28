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

    //Find the area of a triangle based on its vertices
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    double p = (a + b + c) / 2;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << fixed << setprecision(2) << area << endl;


    return 0;
}