#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int n;
int st[100];

int lowbit(int x)
{
    return x & (-x);
}

void add(int x, int k)
{
    for (; x <= n; x += lowbit(x))
        st[x] += k;
}

int ask(int x)
{
    int ans = 0;
    for (; x > 0; x -= lowbit(x))
        ans += st[x];
    return ans;
}

int interval_sum(int x, int y)
{
    return ask(y) - ask(x - 1);
}

int main()
{
    n = 3;
    memset(st, 0, sizeof(st));
    add(1, 1);
    add(2, 2);
    add(3, 3);
    cout << interval_sum(1, 3) << flush;
    return 0;
}