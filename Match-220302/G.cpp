//
// Created by sfc9982 on 2022/03/02.
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

string name[105];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> name[i];
    sort(name + 1, name + n + 1);
    cout << name[k] << endl;
    return 0;
}