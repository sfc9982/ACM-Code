//
// Created by sfc9982 on 2022/03/23.
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

const int INF = 0x3f3f3f3f;

int len = INF;
int n, m, a[1000001], ans[2001];

deque<int> Q;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int l, r;
    cin >> n >> m;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (!ans[a[i]])
            sum++;
        ans[a[i]]++;
        Q.push_back(i);
        while (!Q.empty() && ans[a[Q.front()]] > 1)
        {
            ans[a[Q.front()]]--;
            Q.pop_front();
        }
        if (sum == m)
            if ((int) Q.size() < len)
            {
                len = (int) Q.size();
                l = Q.front();
                r = Q.back();
            }
    }
    cout << l << " " << r << endl;
    return 0;
}