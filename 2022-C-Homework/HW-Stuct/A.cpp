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

    //Find the perimeter of an n-gon

    int n;
    cin >> n;
    double perimeter = 0;
    double pre_x = 0, pre_y = 0;
    double base_x, base_y;
    for (int i = 0; i < n; i++)
    {
        double x, y;
        cin >> x >> y;
        if (i == 0)
        {
            base_x = x;
            base_y = y;
        }
        else
        {
            perimeter += sqrt((x - pre_x) * (x - pre_x) + (y - pre_y) * (y - pre_y));
        }
        pre_x = x, pre_y = y;
    }
    perimeter += sqrt((base_x - pre_x) * (base_x - pre_x) + (base_y - pre_y) * (base_y - pre_y));

    cout << setprecision(6) << fixed << "hl=" << perimeter << endl;
    return 0;
}