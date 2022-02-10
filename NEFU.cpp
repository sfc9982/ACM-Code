#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        while (n--)
        {
            string a, b;
            cin >> a;
            b = a;
            reverse(a.begin(), a.end());
            if (a == b) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}