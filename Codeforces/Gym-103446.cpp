//
// Created by sfc9982 on 2022/03/18.
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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long p, q;
        cin >> p >> q;
        long long d   = p * p - 4 * q * q;
        auto      x   = static_cast<long long int>(sqrt(d));
        long long gcd = __gcd(p - x, q * 2);
        if (x * x == d) // when d have no imaginary part
            cout << (p - x) / gcd << " " << q * 2 / gcd;
        else
            cout << 0 << " " << 0;
        cout << endl;
    }
    return 0;
}
