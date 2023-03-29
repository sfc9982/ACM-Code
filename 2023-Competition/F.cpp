//
// Created by sfc9982 on 2023/3/19.
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

double       f[2003];
const double eps = 1e-8;

int main() {
    int    T, n;
    double p;
    cin >> T;
    while (T--) {
        memset(f, 0, sizeof(f));
        f[0] = 1;
        cin >> n >> p;
        for (int i = 0; i < n; ++i) {
            for (int j = 1; j <= 4; ++j) {
                f[i + j] += f[i] / 4;
            }
        }
        double sum = f[n] + f[n + 1] + f[n + 2] + f[n + 3];
        double ans = f[n] / sum;
        if (p < ans + eps)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
