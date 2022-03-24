//
// Created by sfc9982 on 2022/03/23.
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

stack<int> S;
int n, push_arr[100005], pop_arr[100005];
int t;

bool valid()
{
    for (int i = 1; i <= n; i++)
    {
        if (!S.empty() && S.top() == pop_arr[i])
        {
            S.pop();
            continue;
        }
        while (t <= n && push_arr[t] != pop_arr[i])
        {
            S.push(push_arr[t]);
            t++;
        }
        if (t > n)
            return false;
        t++;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        t = 1;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> push_arr[i];
        for (int i = 1; i <= n; i++)
            cin >> pop_arr[i];
        while (!S.empty())
            S.pop();
        if (valid())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}