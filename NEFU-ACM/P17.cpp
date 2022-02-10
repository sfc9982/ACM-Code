#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int n, p, f[1031];

int main()
{
    while (cin >> n)
    {
        memset(f, 0, sizeof(f));
        for (int i = n; i >= 1; i--)
            for (int j = i; j <= n; j++)
            {
                cin >> p;
                f[j] = max(f[j], f[j + 1]) + p;
            }
        sort(f, f + n + 1);
        cout << f[n] << endl;
    }
    return 0;
}