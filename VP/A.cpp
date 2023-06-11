//
// Created by sfc9982 on 2022/03/05.
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    long long t;
    cin >> t;
    while (t--) {
        long long n, s;
        cin >> n >> s;
        n *= n;
        long long ans = s / n;
        cout << ans << endl;
    }
    return 0;
}
