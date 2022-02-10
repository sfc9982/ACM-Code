#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

pair<int, int> drug[1050];

bool cmp(const pair<int, int> &_a, const pair<int, int> &_b)
{
    return _a.second < _b.second;
}

int main()
{
    int n, t = 0;
    double sum = 0;
    while (cin >> n)
    {
        for (int i = 1; i <= n; i++)
        {
            drug[i].first = i;
            cin >> drug[i].second;
        }
        sort(drug + 1, drug + n + 1, cmp);
        for (int i = 1; i <= n; i++)
        {
            cout << drug[i].first << " ";
            sum += t;
            t += drug[i].second;
        }
        cout << endl;
        cout << fixed << setprecision(2) << sum / n << endl;
    }
    return 0;
}