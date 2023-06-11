#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100], ch1;
    int  i, x, j;
    while (scanf("%s %c %d", str, &ch1, &x) != EOF) {
        long n = strlen(str);
        for (i = 0; i < n; i++) {
            if (str[i] == ch1) {
                for (j = i; j < n; j++)
                    str[j] = str[j + 1];
            }
        }
        n = strlen(str);
        for (i = 0; i < n; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                if (str[i] + x > 'a' && str[i] + x <= 'z')
                    str[i] = str[i] + x;
                else if (str[i] + x > 'z')
                    str[i] = str[i] + x - 26;
            }
        }
        printf("%s\n", str);
    }

    return 0;
}