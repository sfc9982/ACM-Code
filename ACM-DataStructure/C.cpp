//
// Created by sfc9982 on 2022/02/09.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <cmath>
#include <stack>

using namespace std;

stack<int> s1, s2, s3;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n, x, y;
    cin >> n;
    for (int i = n; i > 0; i--)
        s1.push(i);
    while (cin >> x >> y)
    {
        if (x == 1)
        {
            while (y--)
            {
                s2.push(s1.top());
                s1.pop();
            }
        } else if (x == 2)
        {
            while (y--)
            {
                s3.push(s2.top());
                s2.pop();
            }
        }
        if ((int) s3.size() == n) break;
    }
    while (!s3.empty())
    {
        cout << s3.top() << endl;
        s3.pop();
    }
    return 0;
}