//
// Created by sfc9982 on 2022/6/6.
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

vector<long long> a(200005);
vector<int>       cnt(200005);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ++cnt[a[i]];
    }

    int freq = max_element(begin(cnt), end(cnt)) - begin(cnt);
    int idx  = find(begin(a), end(a), freq) - begin(a);

    cout << n - cnt[freq] << endl;

    for (int i = idx - 1; i >= 0; --i) {
        if (a[i] != a[i + 1]) {
            int type = (a[i] < a[i + 1] ? 1 : 2);
            cout << type << " " << i + 1 << " " << i + 2 << endl;
        }
        a[i] = a[i + 1];
    }

    for (int i = 1; i < n; ++i) {
        if (a[i] != freq) {
            int type = (a[i] < a[i - 1] ? 1 : 2);
            cout << type << " " << i + 1 << " " << i << "\n";
        }
        a[i] = freq;
    }

    return 0;
}