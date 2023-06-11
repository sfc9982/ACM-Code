#include <iostream>

using namespace std;

int a[1002];

int main() {
    int n, T;
    cin >> T;
    while (T--) {
        cin >> n;
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i) {
            int j, tmp = a[i];
            for (j = i; j > 0 && a[j - 1] > tmp; j--)
                a[j] = a[j - 1];
            a[j] = tmp;
        }
        for (int i = 0; i < n; ++i)
            cout << a[i] << (i != n - 1 ? " " : "\n");
    }
    return 0;
}