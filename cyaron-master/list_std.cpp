#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

map<string, bool> flag;

int main()
{
    int n, cnt = 0;
    string tmp, str[500];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        if (!flag[tmp])
        {
            flag[tmp] = 1;
            str[i] = tmp;
            ++cnt;
        }
    }
    stable_sort(str, str + n);
    for (int i = n - cnt; i < n; i++)
        cout << str[i] << (i != n - 1 ? " " : "");
    cout << endl;
    return 0;
}