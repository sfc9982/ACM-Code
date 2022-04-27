#include <cmath>
#include <iostream>

using namespace std;

long long qpower(long long x, long long n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return x;
    if (n % 2 == 0)
        return qpower(x * x, n / 2);
    return x * qpower(x * x, n / 2);
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << qpower(x, n) << endl;

    system("pause");
    return 0;
}
