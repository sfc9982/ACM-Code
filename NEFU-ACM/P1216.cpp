#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int a[1002][1002];
int f[1002];

int main()
{
    int r;
    cin >> r;
    memset(a, 0, sizeof(a));
    memset(f, 0, sizeof(f));
    for (int i = 1; i <= r; ++i)
    {
        for (int j = 1; j <= i; ++j)
            cin >> a[i][j];
        for (int j = i; j >= 1; --j)
            f[j] = max(f[j - 1], f[j]) + a[i][j];
    }
    sort(f + 1, f + r + 1);
    cout << f[r] << endl;
    return 0;
}