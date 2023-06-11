#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int  num[10], n;
    char str[10];
    while (scanf("%d", &n) != -1) {
        memset(num, 0, sizeof(num));
        int max = -1, t;
        for (int i = 0; i < n; i++) {
            scanf("%s", str);
            if (strcmp(str, "green") == 0)
                num[1]++;
            if (strcmp(str, "red") == 0)
                num[2]++;
            if (strcmp(str, "blue") == 0)
                num[3]++;
            if (strcmp(str, "pink") == 0)
                num[4]++;
            if (strcmp(str, "orange") == 0)
                num[5]++;
            if (strcmp(str, "black") == 0)
                num[6]++;
        }
        for (int i = 1; i <= 6; i++) {
            if (num[i] >= max) {
                max = num[i];
                t   = i;
            }
        }
        switch (t) {
            case 1:
                printf("green\n");
                break;
            case 2:
                printf("red\n");
                break;
            case 3:
                printf("blue\n");
                break;
            case 4:
                printf("pink\n");
                break;
            case 5:
                printf("orange\n");
                break;
            default:
                printf("black\n");
        }
    }
    return 0;
}
