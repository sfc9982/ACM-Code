//
// Created by sfc9982 on 2022/03/31.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int n;

list<string> q;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        q.push_front(s);
    }
    q.sort();
    q.unique();
    cout << q.size();
    return 0;
}