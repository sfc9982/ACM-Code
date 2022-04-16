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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, T;
    cin >> T;
    while (T--)
    {
        stack<unsigned long long int> s;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            string op;
            cin >> op;
            if (op == "push")
            {
                unsigned long long x;
                cin >> x;
                s.push(x);
            }
            else if (op == "pop")
            {
                if (s.empty())
                    cout << "Empty" << endl;
                else
                    s.pop();
            }
            else if (op == "query")
            {
                if (s.empty())
                    cout << "Anguei!" << endl;
                else
                    cout << s.top() << endl;
            }
            else
            {
                cout << s.size() << endl;
            }
        }
    }
    return 0;
}