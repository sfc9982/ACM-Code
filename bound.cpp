#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

int a[] = {100, 50, 2, 2, 2, 1};

int main() {
    cout << lower_bound(begin(a), end(a), 2, greater_equal<>()) - a << endl;
    cout << upper_bound(begin(a), end(a), 2, greater_equal<>()) - a << endl;
    return 0;
}
