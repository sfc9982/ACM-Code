#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

const int N = 102400;
bitset<N> bit_p;
vector<int> vec_prime;

void getPrime()
{
    bit_p.set();
    bit_p[0] = bit_p[1] = false;
    for (int i = 0; i < N; ++i)
    {
        if (bit_p[i])
            vec_prime.push_back(i);
        for (auto p = vec_prime.begin(); p < vec_prime.end(); ++p)
        {
            if (i * *p > N)
                break;
            bit_p[i * *p] = false;
            if (i % *p == 0)
                break;
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
        cout << (bit_p[n] ? "YES" : "NO") << endl;
    return 0;
}