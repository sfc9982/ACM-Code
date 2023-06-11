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
        for (bool flag = false; !flag;) {
            flag = true;
            for (int i = 1; i < n; ++i) {
                if (a[i - 1] > a[i]) {
                    flag = false;
                    swap(a[i - 1], a[i]);
                }
            }
        }
        for (int i = 0; i < n; ++i)
            cout << a[i] << (i != n - 1 ? " " : "");
        cout << endl;
    }
    return 0;
}