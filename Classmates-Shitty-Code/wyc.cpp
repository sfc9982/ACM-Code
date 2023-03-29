#include <iostream>
#include <vector>

using namespace std;

int main()
{
    const int m = 4, n = 3;
    int a[m + 2][n + 2] = {0};
    int b[m + 2][n + 2] = {0};
    const int tx[] = {0, 1, 1, 1, 0, -1, -1, -1, 0};
    const int ty[] = {1, 1, 0, -1, -1, -1, 0, 1, 1};
    cout << "please give me the original data." << endl;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int s = 0;
            for (int k = 0; k < 8; k++)
                if (a[i + tx[k]][j + ty[k]] == 1)
                    s++;
            if (a[i][j] == 1)
            {
                if (s == 2 || s == 3)
                    b[i][j] = 1;
                else
                    b[i][j] = 0;
            }
            if (a[i][j] == 0)
            {
                if (s == 3)
                    b[i][j] = 1;
                else
                    b[i][j] = 0;
            }
        }
    }
    cout << "after,the cells will be:" << endl;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << b[i][j] << " ";
        cout << endl;
    }
}