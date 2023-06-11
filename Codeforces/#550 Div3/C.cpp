//
// Created by sfc9982 on 2022/6/6.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

long long         cnt[200005];
long long         a[200005];
vector<long long> v, v1;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    long long n, y;
    long long maxx = -0x3f3f3f3f;
    long long ans  = 0;

    cin >> n;
    y = n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
        maxx = max(maxx, cnt[a[i]]);
    }

    stable_sort(a, a + n);

    if (maxx >= 3)
        cout << "NO" << endl;
    else {
        if (n == 1) {
            cout << "YES" << endl;
            cout << "0" << endl
                 << endl
                 << "1" << endl
                 << a[0] << endl;
        }
        else if (n == 2) {
            cout << "YES" << endl;
            cout << "1" << endl
                 << a[0] << endl;
            cout << "1" << endl
                 << a[1] << endl;
        }
        else if (n == 3) {
            cout << "YES" << endl;
            cout << "1" << endl
                 << a[0] << endl;
            cout << "2" << endl
                 << a[2] << " " << a[1] << endl;
        }
        else if (n > 3) {
            cout << "YES" << endl;
            for (int i = 1; i < n;) {
                if (a[i - 1] == a[i]) {
                    v.push_back(a[i - 1]), v1.push_back(a[i]);
                    i += 2;
                    y -= 2;
                }
                else {
                    v1.push_back(a[i - 1]), i++;
                    y--;
                }
            }
            if (y != 0) {
                v1.push_back(a[n - 1]);
            }

            cout << v.size() << endl;
            for (long long i: v)
                cout << i << " ";
            cout << endl;
            sort(v1.begin(), v1.end(), greater<>());
            cout << v1.size() << endl;
            for (long long i = 0; i < v1.size(); i++)
                cout << v1[(unsigned long long) i] << " ";
        }
    }


    return 0;
}