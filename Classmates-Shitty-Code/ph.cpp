#include <algorithm>
#include <array>
#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <tuple>
#include <vector>

using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(n);
    for (auto &x: v)
        cin >> x;
    vector<int>                  cnt(k + 1, 0);
    vector<tuple<int, int, int>> querry(m);

    long long now = 0;
    for (auto &[l, r, id]: querry) {
        cin >> l >> r;
        id = now++;
        l--, r--;
    }

    auto get_prt = [](int x) {
        int l = 0, r = 1e3;
        int res = 0;
        while (l <= r) {
            int m = (l + r) >> 1;
            if (m * m >= x) {
                res = m;
                r   = m - 1;
            }
            else {
                l = m + 1;
            }
        }
        return res;
    };

    const int prt = get_prt(n);

    int t = 0;
    sort(querry.begin(), querry.end(), [&](auto &A, auto &B) -> bool {
        ++t;
        int prta = get<0>(A) / prt;
        int prtb = get<0>(B) / prt;
        if (prta == prtb) {
            bool tmp = get<1>(A) < get<1>(B);
            //            if (t > m - 2)
            //                return tmp;
            return tmp ^ ((prta | ~prtb) & 1);
        }
        return prta < prtb;
    });

    function<void(int)> add = [&](int x) {
        now -= cnt[v[x]] * 1ll * cnt[v[x]];
        cnt[v[x]]++;
        now += cnt[v[x]] * 1ll * cnt[v[x]];
    };
    function<void(int)> del = [&](int x) {
        now -= cnt[v[x]] * 1ll * cnt[v[x]];
        cnt[v[x]]--;
        now += cnt[v[x]] * 1ll * cnt[v[x]];
    };

    vector<long long> ans(m);
    int               l = 0, r = -1;
    now = 0;
    for (auto [ql, qr, id]: querry) {
        while (r < qr)
            add(++r);
        while (l > ql)
            add(--l);
        while (r > qr)
            del(r--);
        while (l < ql)
            del(l++);
        ans[id] = now;
    }
    for (auto x: ans) {
        cout << x << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}