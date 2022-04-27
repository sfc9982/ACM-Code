#include <cstring>
#include <iostream>

using namespace std;

double s;

void calculation(double (*p)[4], int n, int *pn)
{
    int i, j;
    double a = 0;
    for (i = 0; i < 3; i++)
    {
        *(*(p + i) + 3) = 0;
        for (j = 0; j < 3; j++)
        {
            *(*(p + i) + 3) = *(*(p + i) + 3) + *(*(p + i) + j);
        }
        a = a + p[i][3];
    }
    a = a / n;
    printf("%.2lf\n", a);
    *pn = 0;
    for (i = 0; i < 3; i++)
    {
        if (p[i][3] > a)
        {
            *pn = *pn + 1;
            s = s + p[i][3];
        }
    }
}


int main()
{
    int n, m, num, i, j;
    while (scanf("%d", &n) != EOF)
    {
        double score[n][4];
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                scanf("%lf", &score[i][j]);
        calculation(score, n, &num);
        printf("%.2lf %d\n", s, num);
    }
    return 0;
}