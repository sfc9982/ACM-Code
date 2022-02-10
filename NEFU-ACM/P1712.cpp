#include <iostream>
#include <algorithm>

using namespace std;

int v[31], w[31];
int f[201];

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= n; ++i)
        cin >> v[i] >> w[i];
    for (int i = 1; i <= n; ++i)
        for (int j = m; j >= v[i]; --j)
            f[j] = max(f[j], f[j - v[i]] + w[i]);
    cout << f[m] << endl;
    return 0;
}