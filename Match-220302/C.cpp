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
#include <functional>

using namespace std;

int a[100050];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        vector<int> div;
        for (int i = 1; i <= sum; i++)
            if (sum % i == 0)
                div.push_back(i);

        auto check = [&](int s) {
            int sum = 0;
            for (int i = 1; i <= n; i++)
            {
                sum += a[i];
                if (sum > s)
                    return false;
                if (sum == s)
                    sum = 0;
            }
            return sum == 0;
        };
        int ans = -1;
        for (auto v: div)
        {
            if (check(v))
            {
                ans = n - sum / v;
                break;
            }
        }
        if (sum == 0)
            ans = 0;
        cout << ans << endl;
    }
    return 0;
}