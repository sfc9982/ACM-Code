#include <iostream>
#include <algorithm>

using namespace std;

int bill[] = {100, 50, 10, 5, 2, 1};

int f(int x)
{
    int *p, cnt = 0;
    while (x)
    {
        p = lower_bound(begin(bill), end(bill), x, greater<>());
        cnt += x / *p;
        x %= *p;
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n, T;
    while (cin >> T && T)
    {
        int sum = 0;
        while (T--)
        {
            cin >> n;
            sum += f(n);
        }
        cout << sum << endl;
    }
    return 0;
}