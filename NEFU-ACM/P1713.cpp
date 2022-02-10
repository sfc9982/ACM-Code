#include <iostream>

using namespace std;

int f[201];
int v[31], w[31];

inline int max(const int &_a, const int &_b)
{
    return _b & ((_a - _b) >> 31) | _a & (~(_a - _b) >> 31);
}

int main()
{
    int n, m;
    cin >> m >> n;
    for (int i = 1; i <= n; ++i)
        cin >> v[i] >> w[i];
    for (int i = 1; i <= n; ++i)
        for (int j = 0; j <= m; ++j)
            if (j - v[i] >= 0)
                f[j] = max(f[j], f[j - v[i]] + w[i]);
    cout << "max=" << f[m] << endl;
    return 0;
}