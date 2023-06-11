//求100-999之间最大的三个素数
#include <math.h>
#include <stdio.h>
int main() {
    int n, i, j = 0, k;
    for (n = 999; n >= 100; n--) {
        k = sqrt(n);
        for (i = 2; i <= k; i++) {
            if (n % i == 0)
                break;
        }
        if (i > k) {
            printf("%d\n", n);
            j++;
        }
        if (j == 3)
            break;
    }
    return 0;
}