//An nlog2n way
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

const int INF = 0x3f3f3f3f;
int f[1001];
int a[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(f, INF, sizeof(f));

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        *upper_bound(f, f + n, a[i]) = a[i];
    cout << distance(f, find(f, f + n, INF)) << endl;
    return 0;
}