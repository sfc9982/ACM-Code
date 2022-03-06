//
// Created by sfc9982 on 2022/03/05.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <cmath>

using namespace std;

vector<long long> fact(18, 1LL);
set<pair<long long, int>> sums;


void subsetSums(int i, long long s, int k)
{
    if (i == 17)
    {
        sums.insert({s, k});
        return;
    }
    subsetSums(i + 1, s, k);
    subsetSums(i + 1, s + fact[i], k + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int a[] = {3, 2, 1};
    for (unsigned long long int i = 1; i < 18; i++)
        fact[i] = static_cast<long long int>(static_cast<unsigned long long int>(fact[i - 1]) * i);
    subsetSums(0, 0LL, 0);
    if (sums.count({0LL, 0})) sums.erase({0LL, 0});
    vector<pair<long long, int>> subSums(sums.begin(), sums.end());
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int ans = __builtin_popcountll(n);
        for (pair<long long, int> s: subSums)
            if (s.first <= n) ans = min(ans, popcountll(n - s.first) + s.second);
        cout << ans << "\n";
    }
    return 0;
}
