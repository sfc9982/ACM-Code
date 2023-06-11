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
        for (int i = 0; i < n; ++i)
            cout << a[i] << (i != n - 1 ? " " : "");
        cout << endl;
    }
    return 0;
}