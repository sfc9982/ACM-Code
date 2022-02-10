#include <iostream>
#include <cstring>

using namespace std;

int x, y;
bool prime[5000];

inline int f(const int &x)
{
    return x * x + x + 41;
}

int main()
{
    memset(prime, true, sizeof(prime));
    for (int i = 2; i <= 3500; ++i)
        if (prime[i])
            for (int j = i * 2; j <= 3500; j += i)
                prime[j] = false;

    while (cin >> x >> y && (x || y))
    {
        for (int i = x; i <= y; ++i)
        {
            if (!prime[f(i)])
            {
                cout << "Sorry" << endl;
                break;
            }
            if (i == y)
                cout << "OK" << endl;
        }
    }
    return 0;
}