#include <iostream>
#include <algorithm>

using namespace std;

int a[1002];

int main()
{
    int n, T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n - 1; ++i)
        {
            int minn = i;
            for (int j = i + 1; j < n; ++j)
            {
                if (a[j] < a[minn])
                    minn = j;
            }
            swap(a[i], a[minn]);
        }
        for (int i = 0; i < n; ++i)
            cout << a[i] << (i != n - 1 ? " " : "\n");
    }
    return 0;
}