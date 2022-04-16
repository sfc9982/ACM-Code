//
// Created by sfc9982 on 2022/03/31.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <queue>
#include <stack>
#include <string>

using namespace std;

int nxt[1000005];
int al, bl;
char s, a[1000005], b[1000005];

void fail()
{
    int p = 0;
    nxt[1] = 0;
    for (int i = 2; i <= bl; i++)
    {
        while (p && b[i] != b[p + 1])
            p = nxt[p];
        if (b[p + 1] == b[i])
            p++;
        nxt[i] = p;
    }
    return;
}

void KMP()
{
    int p = 0;
    for (int i = 1; i <= al; i++)
    {
        while (p && b[p + 1] != a[i])
            p = nxt[p];
        if (b[p + 1] == a[i])
            p++;
        if (p == bl)
        {
            cout << i - bl + 1 << endl;
            p = nxt[p];
        }
    }
    for (int i = 1; i <= bl; i++)
        cout << nxt[i] << " ";
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    cin >> (a + 1);
    al = (int) strlen(a + 1);
    cin >> (b + 1);
    bl = (int) strlen(b + 1);
    fail();
    KMP();
    return 0;
}