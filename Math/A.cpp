
//
// Created by sfc9982 on 2022/4/28.
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

    // calculate union of two sets
    int n, m;
    cin >> n;
    set<int> s1, s2;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s1.insert(x);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        s2.insert(x);
    }
    set<int> s3;
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(s3, s3.begin()));
    for (auto x: s3)
        cout << x << " ";
    cout << endl;

    return 0;
}