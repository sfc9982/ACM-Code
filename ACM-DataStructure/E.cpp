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

priority_queue<int, vector<int>, greater<int>> Q;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int op = 0, x;
        cin >> op;
        switch (op)
        {
            case 1:
            {
                cin >> x;
                Q.push(x);
                break;
            }
            case 2:
            {
                cout << Q.top() << endl;
                break;
            }
            case 3:
            {
                if (!Q.empty())
                    Q.pop();
                break;
            }
            default:;

        }
    }
    return 0;
}