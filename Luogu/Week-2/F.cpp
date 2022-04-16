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

int T;
int op;
queue<int> q;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);


    cin >> T;
    while (T--)
    {
        cin >> op;
        switch (op)
        {
            case 1: {
                int x;
                cin >> x;
                q.push(x);
                break;
            }
            case 2: {
                if (q.empty())
                    cout << "ERR_CANNOT_POP" << endl;
                else
                    q.pop();
                break;
            }
            case 3: {
                if (q.empty())
                    cout << "ERR_CANNOT_QUERY" << endl;

                else
                    cout << q.front() << endl;
                break;
            }
            case 4: {
                cout << q.size() << endl;
                break;
            }
        }
    }
    return 0;
}