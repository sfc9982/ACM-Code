#include <bits/stdc++.h>

using namespace std;

multiset<pair<int, int>> q;
int n, m;


int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int id, x;
        cin >> id >> x;
        q.insert({id, x});
    }
    for (int i = 1; i <= m; i++)
    {
        int id, x;
        cin >> id >> x;
        auto j = q.lower_bound({id, x});
        auto pos = q.find(*j);
        if (pos == q.end())
        {
            cout << "1" << endl;
            q.insert({id, x});
        } else
        {
            cout << "2" << endl;
            q.erase(pos);
            q.insert({id, x});
        }
    }
    return 0;
}