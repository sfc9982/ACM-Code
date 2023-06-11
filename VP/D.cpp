//
// Created by sfc9982 on 2022/03/05.
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    unsigned long long int n;
    cin >> n;

    if (n == 2) {
        cout << 2 << ' ' << 2 << "\n";
        cout << 1 << ' ' << 1 << "\n";
        return 0;
    }

    vector<vector<int>> G(n);

    for (int i = 0; i < (int) n - 1; i++) {
        int u, v;
        cin >> u >> v;
        --u, --v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    vector<vector<pair<int, int>>> dp(n, vector<pair<int, int>>(2));
    for (int i = 0; i < (int) n; i++) {
        dp[i][0] = {0, -1};
        dp[i][1] = {1, -(int) G[i].size()};
    }
    function<void(int, int)> dfs = [&](int u, int p) {
        for (auto v: G[u]) {
            if (v == p) {
                continue;
            }
            dfs(v, u);
            dp[u][1].first += dp[v][0].first;
            dp[u][1].second += dp[v][0].second;
            auto mx = max(dp[v][0], dp[v][1]);
            dp[u][0].first += mx.first;
            dp[u][0].second += mx.second;
        }
    };
    dfs(0, -1);

    auto ans = max(dp[0][0], dp[0][1]);
    cout << ans.first << ' ' << -ans.second << "\n";

    vector<int>                    w(n);
    function<void(int, int, bool)> dfs2 = [&](int u, int p, bool good) {
        if (good) {
            w[u] = (int) G[u].size();
        }
        else {
            w[u] = 1;
        }
        for (auto v: G[u]) {
            if (v == p) {
                continue;
            }
            if (good or dp[v][0] >= dp[v][1]) {
                dfs2(v, u, false);
            }
            else {
                dfs2(v, u, true);
            }
        }
    };
    dfs2(0, -1, !(dp[0][0] >= dp[0][1]));

    for (int i = 0; i < (int) n; i++) {
        cout << w[i] << " \n"[i == n - 1];
    }

    return 0;
}