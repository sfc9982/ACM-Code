//
// Created by sfc9982 on 2022/04/09.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

const double PI = acos(-1);
bool flag[200005];

struct Pos {
    int x, y;
    double d;
    int z;
    double phi;
    int num;
} p[200005];

inline bool cmp(const Pos &a, const Pos &b)
{
    return a.phi < b.phi;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, L;
    memset(flag, 0, sizeof(flag));
    cin >> n >> L;
    for (int i = 1; i <= n; i++)
    {
        int x, y, z;
        double phi;
        cin >> x >> y >> z;
        phi = atan(static_cast<float>(y) / static_cast<float>(x)) / PI;
        if (y < 0)
            phi += PI;
        phi -= 0.5f;
        if (phi < 0)
            phi += 2.0f;
        double d = sqrt(x * x + y * y);
        p[i] = {x, y, d, z, phi, -1};
    }
    sort(p + 1, p + n + 1, cmp);
    int id = 1, cur;
    double pre = p[1].phi;
    int lst = 0;
    for (int i = 1; i <= n; i++)
    {
        if (p[i].d <= L)
        {
            L += p[i].z;
            if (pre != p[i].phi)
                id++;
            pre = p[i].phi;
            p[i].num = id;
        }
        cur = max(cur, L);
        if (cur != lst)
            lst = cur;
        else
            break;
    }
    int offset = 0;
    for (int i = 1; i <= n; i++)
    {
        if (p[i].num == -1)
        {
            cout << -1 << endl;
        }
        else if (!flag[p[i].num])
        {
            cout << p[i].num + offset << endl;
            flag[p[i].num] = true;
        }
        else
        {
            cout << p[i].num + offset << endl;
            offset++;
        }
    }
    return 0;
}