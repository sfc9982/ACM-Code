#include <iostream>
#include <climits>
#include <iomanip>
#include <algorithm>

using namespace std;

const uint64_t MASK = 0x7fffffffffffffff;

union {
    uint64_t i;
    double d;
} u;

int main()
{
    double x;
    while (cin >> u.d)
    {
        u.i &= MASK;
        cout << fixed << setprecision(2) << u.d << endl;
    }
    return 0;
}