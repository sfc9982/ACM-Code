//
// Created by sfc9982 on 2022/03/11.
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

string a, b;
long long ans;
int sum1, sum2, cnt1, cnt2;
int flag[1000005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    while (cin >> n)
    {
        sum1 = sum2 = 0;
        memset(flag, 0, sizeof(flag));
        cin >> a >> b;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == 'A' && b[i] == 'B') || (a[i] == 'B' && b[i] == 'B'))
                flag[i] = 1;
            if (a[i] == 'A')
                sum1++;
            else if (a[i] == 'B')
                sum2++;
        }
        cnt1 = cnt2 = 0;
        ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'A' && flag[i])
                cnt1++;
            if (a[i] == 'B' && flag[i])
                cnt2++;
            if (a[i] == 'A' && b[i] == 'B')
                ans += sum2 - cnt2;
            if (a[i] == 'B' && b[i] == 'B')
                ans += sum1 - cnt1;
        }
        cout << ans << endl;
    }
    return 0;
}
