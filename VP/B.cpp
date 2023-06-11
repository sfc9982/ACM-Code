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

const int MOD = 1000000007;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (auto &i: v)
            cin >> i;
        sort(v.begin(), v.end());
        long long i = 2, j = n - 2, sm_r = v[n - 1], sm_b = v[0] + v[1];
        while (i < j) {
            if (sm_r > sm_b) {
                cout << "YES";
                goto loop_end;
            }
            sm_r += v[j--];
            sm_b += v[i++];
        }
        if (sm_r > sm_b)
            cout << "YES";
        else
            cout << "NO";
    loop_end:
        cout << endl;
    }
    return 0;
}
