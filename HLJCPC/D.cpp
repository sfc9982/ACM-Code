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

#define M_PI 3.14159265358979323846

using namespace std;

double dist(double x1, double y1, double x2, double y2)
{
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);


    int T;
    cin >> T;
    while (T--)
    {
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        double k0 = (y2 - y1) / (x2 - x1 + 0.000001);
        double theta1 = atan2(y2 - y1, x2 - x1) * 180 / M_PI;
        double theta2 = asin(2.0f / dist(x1, y1, x2, y2)) * 180 / M_PI;
        double theta3 = atan2(y3 - y2, x3 - x2) * 180 / M_PI;
        double offset1 = theta1 + theta2;
        double offset2 = theta1 - theta2;
        double vert1 = offset2 + 90;
        double vert2 = offset1 - 90;
        if (vert1 > 180)
            vert1 -= 360;
        if (vert2 < 0)
            vert2 += 360;
        double k1 = tan(vert1 * M_PI / 180);
        double k2 = tan(vert2 * M_PI / 180);
        double k3 = (y3 - y2) / (x3 - x2 + 0.00001);
        if (theta3 < max(vert1, vert2) - 10 && theta3 > min(vert1, vert2) + 10)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
        //        cout << fixed << setprecision(2) << k1 << " " << k2 << endl;
    }
    return 0;
}