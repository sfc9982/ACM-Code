//
// Created by sfc9982 on 2022/4/13.
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
    int sum = 0;
    for (int i = 0; i <= 30; i += 2)
        for (int j = 0; j <= 60; j += 2)
            for (int k = 0; k <= 300; k += 2)
                if (10 * i + 5 * j + k == 300)
                    sum++;
    printf("%d", sum);
    return 0;
}