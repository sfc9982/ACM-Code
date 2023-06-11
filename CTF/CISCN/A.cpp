#include <iostream>

using namespace std;

int main() {
    const int w = 132;
    char      ch;
    string    s = "";
    while (cin >> ch) {
        s += ch;
        if (s.size() == w) {
            cout << s << endl;
            s = "";
        }
    }
    return 0;
}