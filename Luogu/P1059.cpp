//
// Created by sfc9982 on 2022/03/09.
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

int sum = 0, nest[1002] = {0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, x;
    cin >> n;
    memset(nest, 0, sizeof nest);
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (nest[x])
            continue;
        nest[x]++;
        sum++;
    }
    cout << sum << endl;
    for (int i = 1; i <= 1000; i++)
        if (nest[i])
            cout << i << " ";
    cout << endl;
    return 0;
}