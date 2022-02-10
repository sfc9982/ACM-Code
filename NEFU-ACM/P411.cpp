#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.1415927;

int main()
{
    double r, v;
    while (cin >> r)
    {
        v = PI * r * r * r * 4 / 3;
        printf("%.3lf\n", v);
    }
    return 0;
}