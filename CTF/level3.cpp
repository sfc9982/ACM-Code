#include <iostream>

using namespace std;

char base64_table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

void O_OLookAtYou() {
    int  i;
    char tmp;

    for (i = 0; i < 10; i += 1) {
        tmp                    = base64_table[i];
        base64_table[i]        = base64_table[023 - i];
        base64_table[0x13 - i] = tmp;
    }
}

int main() {
    O_OLookAtYou();
    cout << base64_table << flush;

    return 0;
}