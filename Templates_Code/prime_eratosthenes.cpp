#include <iostream>
#include <bitset>

using namespace std;

const int N = 102400;
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
    int n;
    while (cin >> n)
        cout << (p[n] ? "YES" : "NO") << endl;
    return 0;
}