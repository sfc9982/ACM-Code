//
// Created by sfc9982 on 2022/03/31.
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

int minn, rtboy, rtgirl, boy, girl;
int father[20001], mother[20001];

int find_num(int fa[], int x)
{
    if (fa[x] != x)
        fa[x] = find_num(fa, fa[x]);
    return fa[x];
}

void merge_boy(int x, int y)
{
    int r1, r2;
    r1 = find_num(father, x);
    r2 = find_num(father, y);
    if (r1 != r2)
        father[r2] = r1;
}

void merge_girl(int x, int y)
{
    int r1, r2;
    r1 = find_num(mother, x);
    r2 = find_num(mother, y);
    if (r1 != r2)
        mother[r2] = r1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, m, p, q;
    cin >> n >> m >> p >> q;
    for (int i = 1; i <= n; i++)
        father[i] = i;
    for (int i = 1; i <= m; i++)
        mother[i] = i;
    for (int i = 1; i <= p; i++)
    {
        int x, y;
        cin >> x >> y;
        merge_boy(x, y);
    }
    for (int i = 1; i <= q; i++)
    {
        int x, y;
        cin >> x >> y;
        x = -x;
        y = -y;
        merge_girl(x, y);
    }
    rtboy = find_num(father, 1);
    rtgirl = find_num(mother, 1);
    boy = girl = 0;
    for (int i = 1; i <= n; i++)
        if (find_num(father, i) == rtboy)
            boy++;
    for (int i = 1; i <= m; i++)
        if (find_num(mother, i) == rtgirl)
            girl++;
    minn = min(boy, girl);
    cout << minn << endl;
    return 0;
}