#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    int i;
    double ans, q, s = -1.0;
    while (scanf("%lf", &x) != EOF)
    {
        s = -1.0;
        if (x == 0)
        {
            printf("0.000000\n");
        } else
        {
            ans = x;
            q = x;

            for (i = 1;; i += 2)
            {
                q = q * (x * x / (((double) i + 1.0f) * ((double) i + 2.0f)));
                if (q < 0.00001)
                    break;
                ans = ans + s * q;
                s = -s;
            }
            printf("%.6lf\n", ans);
        }
    }
    return 0;
}
