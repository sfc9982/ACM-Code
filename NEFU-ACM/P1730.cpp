#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int *a = new int[n];
    int *f = new int[n];
    int *sum = new int[n];
    memset(f, 0, n * sizeof(int));
    memset(sum, 0, n * sizeof(int));

    *f = 1;

    for (int i = 0; i < n; ++i)
        cin >> a[i];
    *sum = *a;

    for (int j = 1; j < n; ++j)
    {
        for (int i = 0; i < j; ++i)
        {
            if (a[i] < a[j])
            {
                if (f[i] + 1 > f[j])
                    sum[j] = sum[i] + a[j];
                f[j] = max(f[j], f[i] + 1);
            }
        }
    }
    sort(sum, sum + n);
    cout << sum[n - 1] << endl;
    return 0;
}