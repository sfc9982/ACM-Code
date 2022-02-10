#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, T;
    cin >> T;

    for (int iCase = 1; iCase <= T; ++iCase)
    {
        cin >> n;
        int op = 1, ed = 1;
        int p = op, q = ed;
        int *a = new int[n + 1], *f = new int[n + 1];
        *f = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
            f[i] = a[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            f[i] = max(f[i], f[i - 1] + a[i]);
            if (f[i - 1] + a[i] > a[i])
                q = i;
            if (f[i - 1] + a[i] <= a[i])
                p = q = i;
            if (f[i] > f[ed])
                op = p, ed = q;
        }
        sort(f + 1, f + n + 1);
        cout << "Case " << iCase << ":" << endl;
        cout << f[n] << " " << op << " " << ed << endl;
        if (iCase != T)
            cout << endl;
        delete[]a, delete[]f;
    }
    return 0;
}