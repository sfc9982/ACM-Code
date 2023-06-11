#include <iostream>

using namespace std;

int main() {
    int str[] = {
            0, 198, 232, 816, 200, 1536, 300, 6144, 984, 51200, 570, 92160,
            1200, 565248, 756, 1474560, 800, 6291456, 1782, 65536000};
    for (int i = 1; i < 20; i += 1) {
        if ((i & 1) == 0) {
            //            printf("%ld\n", (str[i] * i));
            str[i] /= i;
        }
        else {
            //            printf("%ld\n", str[i] << (i & 31));
            str[i] >>= (i & 31);
        }
    }
    for (int i = 0; i < 20; i += 1)
        cout << (char) str[i];
    return 0;
}