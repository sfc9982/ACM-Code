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

int  n, a[100001];
bool b[100000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);


    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 2; i <= n; i++)
        b[abs(a[i] - a[i - 1])] = true;
    for (int i = 1; i < n; i++) {
        if (!b[i]) {
            cout << "Not jolly";
            return 0;
        }
    }
    cout << "Jolly" << endl;
    return 0;
}