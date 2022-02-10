#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int T, M;
int v[5000], w[5000];
int f[5000];

int main()
{
    memset(f, 0, sizeof(f));
    while (cin >> T >> M)
    {
        memset(f, 0, sizeof(f));
        for (int i = 1; i <= M; ++i)
            cin >> v[i] >> w[i];
        for (int i = 1; i <= M; ++i)
            for (int j = T; j >= 0; --j)
                if (j - v[i] >= 0)
                    f[j] = max(f[j], f[j - v[i]] + w[i]);
        cout << f[T] << endl;
    }
    return 0;
}