#include <bitset>
#include <iostream>

using namespace std;

const int N = 101;
bitset<N> p;

void getPrime()
{
    p.set();
    p.set(0, false);
    p.set(1, false);

    for (int i = 0; i * i < N; ++i)
    {
        if (p[i])
        {
            for (int j = i << 1; j < N; j += i)
            {
                p[j] = false;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    getPrime();
    for (int i = 2; i <= 100; i++)
    {
        if (p[i])
        {
            cout << i << " ";
        }
    }
    return 0;
}