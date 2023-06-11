//
// Created by sfc9982 on 2022/6/9.
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int          n;
    const string fail = ":(";
    string       s;

    cin >> n;
    cin >> s;

    if (n % 2 != 0) {
        cout << fail << endl;
        return 0;
    }

    int l, r;
    l = r = n / 2;

    for (int i = 0; i < n; i++) {
        if (s[i] == '(')
            l--;
        else if (s[i] == ')')
            r--;
    }

    int stack = 0;

    if (s[0] == '?') {
        l--;
        stack = 1;
        s[0]  = '(';
    }
    else if (s[0] == '(') {
        stack = 1;
    }
    else {
        stack = -1;
    }

    for (int i = 1; i < n; i++) {
        if (stack <= 0 && i < n - 1) {
            cout << fail << endl;
            return 0;
        }
        if (s[i] == '(') {
            stack++;
        }
        else if (s[i] == ')') {
            stack--;
        }
        else {
            if (l) {
                s[i] = '(';
                l--;
                stack++;
            }
            else {
                s[i] = ')';
                r--;
                stack--;
            }
        }
    }

    if (stack != 0)
        cout << fail;
    else
        cout << s;
    cout << endl;

    return 0;
}