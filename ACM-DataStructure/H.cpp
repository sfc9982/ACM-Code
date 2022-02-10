//
// Created by sfc9982 on 2022/02/10.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < k; ++i)
    {
        cout << i % n + 1 << " " << i % m + 1 << endl;
    }
    return 0;
}