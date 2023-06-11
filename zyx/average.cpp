//
// Created by sfc9982 on 2022/4/18.
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

int a[1005];

int main() {
    //bublle sort

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                int t    = a[j + 1];
                a[j + 1] = a[j];
                a[j]     = t;
            }
        }
    }
    return 0;
}