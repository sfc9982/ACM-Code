#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    while (scanf("%d ", &n) != EOF)
    {
        int ans[110];
        memset(ans, 0, sizeof(ans));
        int maxlen = 0;
        while (n--)
        {
            int cnt = 0;
            char t[110];
            scanf("%s", t);
            for (int i = strlen(t) - 1; i >= 0; i--)
                ans[cnt++] += (t[i] - '0');
            if (cnt > maxlen)
                maxlen = cnt;
        }
        int over = 0;
        for (int i = 0; i < maxlen; i++)
        {
            ans[i] += over;
            over = ans[i] / 10;
            ans[i] %= 10;
        }
        for (int i = maxlen - 1; i >= 0; i--)
            printf("%d", ans[i]);
        printf("\n");
    }
    return 0;
}

