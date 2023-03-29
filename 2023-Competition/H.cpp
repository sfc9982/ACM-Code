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

constexpr size_t N = 5000;
int              a[N + 5];
int              slime[N << 1 + 5], f[N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> slime[i];
        a[slime[i]]++;
    }
    for (int i = 1; i <= N; ++i) {
        if (a[i] == 0) {
            continue;
        }
        for (int j = 1; j < i; ++j) {
            if (a[j] == 0) {
                continue;
            }
            int ratio = i / j;
            if (j * ratio == i) {
                f[i] += a[j];
            }
        }
        f[i] += a[i] - 1;
    }
    for (int i = 0; i < n; ++i) {
        cout << (i ? " " : "") << f[slime[i]];
    }
    return EXIT_SUCCESS;
}
