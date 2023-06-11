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

int w[20005];

int main() {
    //    ios::sync_with_stdio(false);
    //    cin.tie(nullptr), cout.tie(nullptr);

    int n, h, i;
    scanf("%d %d", &n, &h);
    for (i = 0; i < n; i++)
        scanf("%d", &w[i]);
    sort(w, w + n);
    for (i = n - 1; h > 0; i--)
        h -= w[i];
    printf("%d\n", n - i - 1);
    return 0;
}