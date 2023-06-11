#include <algorithm>
#include <cstring>
#include <iostream>

using namespace std;

const int INF = 0x3f3f3f3f;

inline int max(const int &_a, const int &_b) {
    return _b & ((_a - _b) >> 31) | _a & (~(_a - _b) >> 31);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n, maxx = -INF;
    cin >> n;
    int *f = new int[n + 1];
    memset(f, 0, (n + 1) * sizeof(int));
    for (int i = 1; i <= n; ++i) {
        cin >> f[i];
        f[i] = max(f[i - 1] + f[i], f[i]);
        maxx = max(maxx, f[i]);
    }
    cout << maxx << endl;
    delete[] f;
    return 0;
}