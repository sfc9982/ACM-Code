#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

const int INF = 0x3f3f3f3f;
int st[100000 << 2];

int update(int cur, int l, int r, int x, int v)
{
    int mid = (l + r) >> 1;
    if (x > r || x < l)
        return 0;
    if (l == r && l == x)
    {
        st[cur] = v;
        return 0;
    }
    update(cur << 1, l, mid, x, v);
    update(cur << 1 | 1, mid + 1, r, x, v);
    st[cur] = min(st[cur << 1], st[cur << 1 | 1]);
    return 0;
}

int query(int cur, int l, int r, int x, int y)
{
    int mid = (l + r) >> 1;
    if (x > r || y < l)
        return INF;
    if (x <= l && y >= r)
        return st[cur];
    return min(query(cur << 1, l, mid, x, y), query(cur << 1 | 1, mid + 1, r, x, y));
}

int main()
{
    int n, T;
    cin >> n >> T;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        update(1, 1, n, i, x);
    }
    while (T--)
    {
        int minn, x, y, z;
        cin >> x >> y >> z;
        if (x == 1)
            update(1, 1, n, y, z);
        else if (x == 2)
        {
            minn = query(1, 1, n, y, z);
            cout << minn << endl;
        }
    }
    return 0;
}