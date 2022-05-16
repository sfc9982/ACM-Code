//
// Created by sfc9982 on 2022/5/15.
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

stack<char> chStack;
stack<int> idStack;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '-')
            cout << i + 1 << ' ';
        else if (s[i] == '(')
        {
            chStack.push(s[i]);
            idStack.push(i + 1);
        }
        else if (s[i] == ')')
        {
            cout << i + 1 << ' ' << idStack.top() << ' ';
            chStack.pop();
            idStack.pop();
        }
    }
    return 0;
}