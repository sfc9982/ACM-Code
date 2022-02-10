//
// Created by sfc9982 on 2022/02/09.
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
struct Num {
    int id, val;
} a[2000005];
int ans[2000005];
deque<Num> Q;

int main()
{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr), cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i].val);
        a[i].id = i;
    }
    for (int i = 1; i <= n; i++)
    {
        while (!Q.empty() && a[i - 1].val <= Q.front().val)
            Q.pop_front();
        Q.push_front(a[i - 1]);
        while (Q.back().id <= i - m - 1)
            Q.pop_back();
        ans[i] = Q.back().val;
    }
    for (int i = 0; i < n; i++)
        printf("%d\n", ans[i]);
    return 0;
}
