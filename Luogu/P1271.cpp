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

int a, n, m, nest[1050];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a;
        nest[a]++;
    }
    for (int i = 0; i < 1050; i++)
        while (nest[i]--)
            cout << i << " ";
    return 0;
}