#include <bitset>
#include <iostream>
#include <vector>

using namespace std;

const int   N = 101;
bitset<N>   bit_p;
vector<int> vec_prime;

void getPrime() {
    bit_p.set();
    bit_p[0] = bit_p[1] = false;
    for (int i = 0; i < N; ++i) {
        if (bit_p[i])
            vec_prime.push_back(i);
        for (auto p = vec_prime.begin(); p < vec_prime.end(); ++p) {
            if (i * *p > N)
                break;
            bit_p[i * *p] = false;
            if (i % *p == 0)
                break;
        }
    }
}

int main() {
    getPrime();
    int n;
    for (int i = 2; i <= 100; i++) {
        if (bit_p[i]) {
            cout << i << " ";
        }
    }
    return 0;
}