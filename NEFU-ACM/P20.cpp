#include <iostream>
#include <cstring>

using namespace std;

int f[20][20];

int main()
{
    memset(f, 0, sizeof(f));
    int n;
    f[1][1] = 1;
    n = 16;
    for (int i = 1; i <= n + 1; ++i)
        for (int j = 1; j <= n + 1; ++j)
            f[i][j] += f[i][j - 1] + f[i - 1][j];
    while (cin >> n && n)
        cout << f[n + 1][n + 1] << endl;
    return 0;
}