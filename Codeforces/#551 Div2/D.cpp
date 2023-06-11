//
// Created by sfc9982 on 2022/6/9.
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

const int N   = 1000050;
const int INF = 0x3f3f3f3f;

struct node {
    int   to;
    node *next;
};

node *G[N];

int k = 0;
int a[N], f[N], dp[N], deg[N];

void addv(int u, int v) {
    node *p = new node();
    p->to   = v;
    p->next = G[u];
    G[u]    = p;
}

void dfs(int u) {
    node *p = G[u];
    if (u > 1 && deg[u] == 1) {
        dp[u] = 1;
        k++;
        return;
    }

    dp[u] = a[u] ? INF : 0;

    while (p != nullptr) {
        dfs(p->to);

        if (!a[u])
            dp[u] += dp[p->to];
        else if (dp[p->to] < dp[u])
            dp[u] = dp[p->to];

        p = p->next;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 2; i <= n; i++) {
        cin >> f[i];
        deg[i]++;
        deg[f[i]]++;
        addv(f[i], i);
    }

    dfs(1);
    cout << k + 1 - dp[1] << endl;

    return 0;
}
