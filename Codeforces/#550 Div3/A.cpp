//
// Created by sfc9982 on 2022/6/6.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <queue>
#include <set>
#include <stack>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int    n;
    string s;

    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> s;
        cout << ((set<char>(s.begin(), s.end()).size() == s.length() && *max_element(s.begin(), s.end()) == char(static_cast<unsigned long long int>(*min_element(s.begin(), s.end())) + (s.length() - 1))) ? "Yes" : "No") << endl;
    }
    return 0;
}