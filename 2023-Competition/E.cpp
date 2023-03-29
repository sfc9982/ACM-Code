#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main() {
    int m;
    cin >> m;
    string n;
    for (int i = 1; i <= ceil(m / 2.0); ++i)
        n += to_string(i);
    do {
        auto rev = string(n.rbegin(), n.rend());
        if (m % 2 != 0)
            rev.erase(rev.begin());
        cout << n << rev << endl;
    } while (next_permutation(n.begin(), n.end()));
    return 0;
}
