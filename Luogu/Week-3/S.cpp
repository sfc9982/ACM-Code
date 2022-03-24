//
// Created by sfc9982 on 2022/03/23.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

const int N = 200000 + 1;

int n, m, sum;
bool flag[N];


struct nav {
    int val, pre, nxt;
} p[N];

struct Tree {
    int val, id;
    inline bool operator<(const Tree &_x) const
    {
        return val < _x.val;
    }
};

priority_queue<Tree> Q;

inline void delete_node(const int &x)
{
    p[x].pre = p[p[x].pre].pre;
    p[x].nxt = p[p[x].nxt].nxt;
    p[p[x].pre].nxt = x;
    p[p[x].nxt].pre = x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    if (m * 2 > n)
    {
        cout << "Error!" << endl;
        goto Exit;
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> p[i].val;
        p[i].pre = i - 1;
        p[i].nxt = i + 1;
        Q.push({p[i].val, i});
    }
    p[1].pre = n;
    p[n].nxt = 1;
    while (m--)
    {
        while (flag[Q.top().id])
            Q.pop();
        Tree cur = Q.top();
        Q.pop();
        sum += cur.val;
        flag[p[cur.id].pre] = true;
        flag[p[cur.id].nxt] = true;
        p[cur.id].val = p[p[cur.id].pre].val + p[p[cur.id].nxt].val - p[cur.id].val;
        Q.push({p[cur.id].val, cur.id});
        delete_node(cur.id);
    }
    cout << sum << endl;
Exit:
    return 0;
}