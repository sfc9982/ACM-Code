#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    double rou, scale;
    int type;
    cin >> rou >> type >> scale;
    double a = type ? 1.26 : 2.455;
    double ans = a * rou;
    string s = scale > ans ?  "^_^": "T_T";
    cout << fixed << setprecision(2) << ans << " " << s << endl;
    return 0;
}