#include <iostream>

using namespace std;

const int N = 208;
const int P = 103;
int f[N + 5] = {0, 1};


int main()
{
    for (int i = 2; i <= N; ++i)
        f[i] = (f[i - 1] % P + f[i - 2] % P) % P;
    int n;
    while (cin >> n)
        cout << f[n % 208] << endl;
    return 0;
}