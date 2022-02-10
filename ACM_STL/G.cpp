//
// Created by sfc9982 on 2022/02/08.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> a;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int n, m, x;
    cin >> n >> m;
    a.clear();
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> x;
            a.push_back(x);
        }
    }
    for (int i = n * m - 1; i >= 0; --i)
    {
        cout << a[i] << " ";
        if ((i % m) == 0)
            cout << endl;
    }
    return 0;
}