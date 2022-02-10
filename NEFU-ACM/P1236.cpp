#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n, x;
    while (cin >> n >> x)
    {
        int *a = new int[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        cout << distance(a, upper_bound(a, a + n, x)) << endl;
        delete[] a;
    }
    return 0;
}