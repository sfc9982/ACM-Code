#include <cmath>
#include <iostream>

using namespace std;

// 快速幂

int qpow(int a, int b) {
    int ans = 1;
    while (b) {
        if (b & 1) {
            ans *= a;
            b--;
        }
        a *= a;
        b /= 2;
    }
    return ans;
}
int main() {

    int a, b;
    cin >> a >> b;
    cout << qpow(a, b) << endl;

    return 0;
}
