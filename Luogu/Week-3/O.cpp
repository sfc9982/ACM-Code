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
#include <sstream>
#include <stack>
#include <string>

using namespace std;

int sum[1000005];

string st;
stack<int> s1, s2;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, k, len;
    cin >> n >> k >> st;
    for (int i = 1; i <= n; i++)
    {
        s1.push(i);
        if (st[static_cast<unsigned long long int>(i - 1)] == 'c')
        {
            sum[s1.size()] = sum[s1.size() - 1] + 1;
        }
        else
        {
            sum[s1.size()] = sum[s1.size() - 1];
        }
        if ((int) s1.size() >= k + 1 && sum[s1.size()] - sum[s1.size() - k - 1] == 1)
        {
            len = (int) s1.size();
            for (int j = len; j >= len - k; j--)
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
    }
    len = (int) s2.size();
    for (int i = len; i >= 1; i--)
    {
        cout << s2.top() << " ";
        s2.pop();
        if (i % (k + 1) == 1)
            cout << endl;
    }
    return 0;
}