#include <stdio.h>

#include <stdlib.h>


int main()
{
    int n, a[108], i, s, f, f2, f3, q, w, e;

    while (scanf("%d", &n) != -1)
    {

        if (n == 0) break;

        for (i = 0; i < n; i++)

            scanf("%d", &a[i]);

        f = f2 = f3 = 0;

        for (i = 0; i < n; i++)
        {

            if (a[i] / 100 != 0)
            {

                q = a[i] / 100;

                f3 += q;

                w = (a[i] % 100) / 10;

                if (w >= 5)

                    f2 += w - 4;

                if (w < 5)

                    f2 += w;

                e = a[i] % 10;

                if (e == 1 || e == 2 || e == 5) f++;

                if (e == 3 || e == 4 || e == 6 || e == 7) f += 2;

                if (e == 8 || e == 9) f += 3;

            }

            if (a[i] / 100 == 0 && a[i] / 10 != 0)
            {

                w = a[i] / 10;

                if (w >= 5)

                    f2 += w - 4;

                if (w < 5)

                    f2 += w;

                e = a[i] % 10;

                if (e == 1 || e == 2 || e == 5) f++;

                if (e == 3 || e == 4 || e == 6 || e == 7) f += 2;

                if (e == 8 || e == 9) f += 3;

            }

            if (a[i] / 10 == 0)
            {

                e = a[i] % 10;

                if (e == 1 || e == 2 || e == 5) f++;

                if (e == 3 || e == 4 || e == 6 || e == 7) f += 2;

                if (e == 8 || e == 9) f += 3;

            }

        }

        printf("%d\n", f + f2 + f3);

    }

    return 0;

}