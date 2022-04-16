//
// Created by sfc9982 on 2022/03/14.
//

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

int diff[2000][2000];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    int n, m;
    int x1, y1, x2, y2;

    cin >> n >> m;
    while (m--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = x1; i <= x2; i++)
        {
            diff[i][y1]++;
            diff[i][y2 + 1]--;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            diff[i][j] += diff[i][j - 1];
            cout << diff[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}