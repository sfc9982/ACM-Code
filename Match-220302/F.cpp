#include <iostream>

using namespace std;

int n, m;
long long a[200010];
long long d[200010];
const long long MOD = 1e12 + 7;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int l, r;
    long long c;
    for (int i = 1; i <= m; ++i)
    {
        cin >> l >> r >> c;
        d[l] += c;
        d[l] = (d[l] % MOD + MOD) % MOD;
        d[r + 1] -= c;
        d[r + 1] = (d[r + 1] % MOD + MOD) % MOD;

    }
    for (int i = 1; i <= n; ++i)
    {
        d[i] += d[i - 1];
        d[i] = (d[i] % MOD + MOD) % MOD;
    }
    for (int i = 1; i <= n; ++i)
    {
        a[i] += d[i];
        a[i] = (a[i] % MOD + MOD) % MOD;
        cout << a[i] << " ";
    }
    return 0;
}