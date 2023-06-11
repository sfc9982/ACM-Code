//
// Created by sfc9982 on 2022/6/6.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <queue>
#include <stack>
#include <string>

using namespace std;

vector<int> vEven, vOdd;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, ans = 0, sum = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        sum += x;
        if (x % 2 == 1)
            vOdd.push_back(x);
        else
            vEven.push_back(x);
    }

    stable_sort(vOdd.rbegin(), vOdd.rend());
    stable_sort(vEven.rbegin(), vEven.rend());

    auto idx = min((int) vOdd.size(), (int) vEven.size());

    ans = sum;
    ans -= accumulate(vOdd.begin(), vOdd.begin() + idx, 0) + accumulate(vEven.begin(), vEven.begin() + idx, 0);

    if (int(vOdd.size()) > idx)
        ans -= vOdd[(unsigned long long) idx];
    if (int(vEven.size()) > idx)
        ans -= vEven[(unsigned long long) idx];

    cout << ans << endl;

    return 0;
}