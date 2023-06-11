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

int a[5000005], k;

int main() {
    //    ios::sync_with_stdio(false);
    //    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    nth_element(a + 1, a + 1 + k, a + 1 + n);
    printf("%d", a[k + 1]);
    return 0;
}