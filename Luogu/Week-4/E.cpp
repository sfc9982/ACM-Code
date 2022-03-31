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
#include <unordered_map>

using namespace std;


const int N = 1000010;

int p[N], d[N];
int idx;

unordered_map<int, int> id;

struct Query {
    int a, b, t;
} q[N];

int get(int x)
{
    if (!id.count(x))
        id[x] = ++idx;
    return id[x];
}

inline int find(int x)
{
    return x == p[x] ? x : p[x] = find(p[x]);
}

inline void merge(int a, int b)
{
    p[find(a)] = find(b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        id.clear(), idx = 0;
        for (int i = 0; i < N; i++)
            p[i] = i;

        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int a, b, t;
            cin >> a >> b >> t;
            a = get(a), b = get(b);
            q[j] = {a, b, t};
            if (!t)
                continue;
            merge(a, b);
        }

        bool flag = false;
        for (int j = 0; j < k; j++)
        {
            int &a = q[j].a, &b = q[j].b, &t = q[j].t;
            if (t)
                continue;
            if (p[find(a)] == find(b))
            {
                flag = true;
                puts("NO");
                break;
            }
        }

        if (!flag)
            puts("YES");
    }
    return 0;
}