//
// Created by sfc9982 on 2022/4/24.
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

    cout << "123" << endl;
    // turn a matrix 90 degrees clockwise
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    for (int i = 0; i < n; ++i) {
        for (int j = n - 1; j >= 0; --j)
            cout << a[j][i] << " ";
        cout << endl;
    }


    return 0;
}