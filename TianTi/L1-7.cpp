#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int mat[105][105];
int main()
{
    int n, k, x;
    cin >> n >> k >> x;
    memset(mat, 0, sizeof(mat));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> mat[i][j];
        }
    }
    return 0;
}