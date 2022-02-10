//
// Created by sfc9982 on 2022/02/08.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

priority_queue<int, vector<int>, greater<int> > pq;

int main()
{
    int n, m, x, cnt = 0;
    long long sum = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        pq.push(x);
    }
    while (sum + pq.top() <= m)
    {
        int tmp = pq.top() * 2 + 3;
        if (sum + pq.top() <= m)
        {
            sum += pq.top();
            ++cnt;
            pq.pop();
            pq.push(tmp);
        }
    }
    cout << cnt << endl;
    return 0;
}