#include <bits/stdc++.h>
using namespace std;
#define int long long
#define register
const int   N = 10000 + 10;
typedef int itn;

itn         n, m, b;
vector<int> g[N];
vector<itn> w[N];
itn         qq[N], dis[N], vis[N];

struct node {
    int x, key, left;
};

struct cmp {
    inline bool operator()(node a, node b) {
        return a.key > b.key;
    }
};

int         cnt;
inline bool check(int kk) {
    priority_queue<node, vector<node>, cmp> q;
    q.push((node){1, 0, b});
    for (int i = 1; i <= n; i++) {
        dis[i] = INT_MAX;
        if (qq[i] > kk)
            vis[i] = cnt;
    }
    //  memset(vis,0,sizeof(vis));
    dis[1]          = 0;
    register int  u = 0, k = 0;
    register node ttmp;
    while (!q.empty()) {
        ttmp = q.top();
        u    = ttmp.x;
        q.pop();
        if (u == n)
            return 1;
        if (vis[u] == cnt || qq[u] > kk)
            continue;
        vis[u] = cnt;
        for (register int j = 0; j < g[u].size(); j++) {
            k = g[u][j];
            if (vis[k] != cnt && dis[k] > dis[u] + w[u][j] && qq[k] <= kk && qq[u] <= kk && ttmp.left - w[u][j] >= 0) {
                dis[k] = dis[u] + w[u][j];
                q.push((node){k, dis[k], ttmp.left - w[u][j]});
            }
        }
    }
    return 0;
    // return dis[n]<=b;
}
signed main() {
    cin >> n >> m >> b;
    itn r = 0;
    for (register int i = 1; i <= n; i++)
        cin >> qq[i], r = max(r, qq[i]);
    register int u, v, W;
    for (register int i = 1; i <= m; i++) {
        cin >> u >> v >> W;
        if (u == v)
            continue;
        g[u].push_back(v);
        g[v].push_back(u);
        w[u].push_back(W);
        w[v].push_back(W);
    }
    itn l = 0, mid = 0, ans = -213213213;
    r += 1000;
    while (l <= r) {
        mid = (l + r) >> 1;
        ++cnt;
        if (check(mid)) {
            ans = mid;
            r   = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    if (ans != -213213213)
        cout << ans << endl;
    else
        cout << "AFK\n";
}