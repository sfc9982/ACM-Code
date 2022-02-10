// \[bit(x!) = \lg (x!) + 1 = \sum\limits_{n = 1}^x {\lg (n)}  + 1\]
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int n;
double sum;

int main()
{
    while (cin >> n)
    {
        sum = 1.0f;
        for (int i = 1; i <= n; i++)
            sum += log10(i);
        cout << fixed << setprecision(0) << floor(sum) << endl;
    }
    return 0;
}