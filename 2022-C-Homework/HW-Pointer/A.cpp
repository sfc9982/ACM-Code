//
// Created by sfc9982 on 2022/5/28.
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n;
    int a[101];

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int *pmax = max_element(a, a + n);
    int *pmin = min_element(a, a + n);
    int tmp = *pmax;
    *pmax = *pmin;
    *pmin = tmp;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;


    return 0;
}