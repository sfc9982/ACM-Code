#include <iostream>
#include <map>

using namespace std;

map<int, int> cnt;

int main()
{
    int n, m;

    while (cin >> n >> m)
    {
        bool flag = false;
        cnt.clear();
        int *a = new int[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            ++cnt[a[i]];
        }
        if (!m && cnt[0])
        {
            cout << "yes" << endl;
            continue;
        }
        if (!m && !cnt[0])
        {
            cout << "no" << endl;
            continue;
        }
        for (int i = 0; i < n; ++i)
        {
            if (a[i] && !(m % a[i]))
            {
                int t = m / a[i];
                if (cnt[t] && t * t != m)
                {
                    flag = true;
                    goto loop_end;
                }
                if (cnt[t] > 1 && t * t == m)
                {
                    flag = true;
                    goto loop_end;
                }
            }
        }
        loop_end:
        cout << (flag ? "yes" : "no") << endl;
    }

    return 0;
}