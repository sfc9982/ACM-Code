//
// Created by sfc9982 on 2021/12/3.
//

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int T, a, b;
    cin >> T;
    while (T--)
    {
        cin >> a >> b;
        double n = b - a;
        cout << fixed << setprecision(0) << round(0.4472135955 * pow(1.61803398745, n + 1.0f)) << endl;
    }
    return 0;
}