//
// Created by sfc9982 on 2022/03/24.
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

int f[100010];

struct node {
    int num;
    int id;
} e;

deque<node> Q;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        while (!Q.empty() && Q.back().num < x)
            f[Q.back().id] = i, Q.pop_back();
        e.num = x;
        e.id = i;
        Q.push_back(e);
    }
    for (int i = 1; i <= n; i++)
        cout << f[i] << endl;
    return 0;
}