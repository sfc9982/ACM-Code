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

int a[10001000] = {0};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n - 1; i++) {
        for (int j = i; j <= n; j++) {
            if (a[i] > a[j])
                sum++;
        }
    }
    cout << sum;
}
