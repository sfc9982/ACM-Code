#include<bits/stdc++.h>

using namespace std;

int n, m;

int main()
{
    while (cin >> n >> m)
    {
        int d = 0, t = 0;
        for (int i = n; i <= m; i++)
        {
            if (i & 1)
                t += i * i * i;
            else d += i * i;
        }
        cout << d << " " << t << endl;
    }
    return 0;
}