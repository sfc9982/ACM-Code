//
// Created by sfc9982 on 2022/6/9.
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

int l[100], r[100], mat[100][100], f[100][100];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, m, h;

    cin >> n >> m >> h;

    for (int i = 0; i < m; i++)
        cin >> l[i];
    for (int i = 0; i < n; i++)
        cin >> r[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j])
                f[i][j] = min(r[i], l[j]);
            else
                f[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << f[i][j] << " ";
        cout << endl;
    }

    return 0;
}