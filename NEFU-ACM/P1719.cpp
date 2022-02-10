#include <iostream>
#include <cstring>
#include <algorithm>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[202], f[202], pre[202];
    memset(pre, 0, sizeof(pre));
    for (int i = 1; i <= n; ++i)
        cin >> a[i], f[i] = 1;
    for (int j = 2; j <= n; ++j)
        for (int i = 1; i < j; ++i)
            if (a[j] > a[i])
            {
                if (f[i] + 1 > f[j])
                    pre[j] = i;
                f[j] = max(f[j], f[i] + 1);
            }
    int maxx = 0, x = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (f[i] > maxx)
        {
            maxx = f[i];
            x = i;
        }
    }
    cout << "max=" << maxx << endl;

    stack<int> S;
    while (!S.empty())
        S.pop();
    S.push(a[x]);
    for (int i = x; pre[i]; i = pre[i])
        S.push(a[pre[i]]);
    while (!S.empty())
    {
        cout << S.top() << " ";
        S.pop();
    }
    return 0;
}