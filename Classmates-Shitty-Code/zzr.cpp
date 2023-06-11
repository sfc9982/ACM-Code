#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a[101][51];

void js(char a[101][51], int n) {
    int b[100], max = -1;
    int ans = 0;
    memset(b, 0, sizeof(b));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < strlen(a[i]); j++)
            if (a[i][j] == "*")
                b[i]++;
    }
    for (int i = 0; i < n; i++) {
        if (b[i] > max) {
            max = b[i];
            ans = i;
        }
    }
    printf("%s\n", a[ans]);
}

int main() {
    int n;
    memset(a, 0, sizeof(a));
    while (scanf("%d", &n) != -1) {
        getchar();
        for (int i = 0; i < n; i++)
            scanf("%s", a[i]);
        js(a, n);
    }
    return 0;
}