#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int INF = 0x3f3f3f3f;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int *f = new int[n];
    memset(f, INF, n * sizeof(int));

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        *lower_bound(f, f + n, x) = x;
    }
    cout << distance(f, find(f, f + n, INF)) << endl;
    delete[] f;
    return 0;
}