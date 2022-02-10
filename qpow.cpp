#include <iostream>

using namespace std;

long long qpow(long long a, long long b, long long c)
{
    long long ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans * a) % c;
        }
        a = (a * a) % c;
        b >>= 1;
    }
    return ans;
}

int main()
{
    long long a = 0;
    const long long MOD = 1e9 + 7;
    for (long long i = 0; i < 19260817; i++)
    {
        a += qpow(10, i, MOD);
        a %= MOD;
    }
    a <<= 1;
    cout << a % MOD << endl;
} 
