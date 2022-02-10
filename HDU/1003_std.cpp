#include <cstdio>
#include <cstring>

#define maxn 100005

int f[maxn];

int main()
{
    int T;
    scanf("%d", &T);
    for (int c = 1; c <= T; c++)
    {
        int n, num;
        scanf("%d %d", &n, &num);
        int op = 1, ed = 1;
        int max = num;
        f[1] = num;
        int p = 1, q = 1;
        for (int i = 2; i <= n; i++)
        {
            scanf("%d", &num);
            f[i] = num;
            if (f[i - 1] + num >= num)
            {
                f[i] = f[i - 1] + num;
                q++;
            } else
            {
                p = i;
                q = i;
            }
            if (f[i] > max)
            {
                max = f[i];
                op = p;
                ed = q;
            }
        }
        if (c != 1)
            printf("\n");
        printf("Case %d:\n%d %d %d\n", c, max, op, ed);
    }
}