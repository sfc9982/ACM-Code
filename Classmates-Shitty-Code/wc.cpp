//
// Created by sfc9982 on 2022/03/23.
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

const int N = 100, M = 100;
const int INF = 0x3f3f3f3f;
int mat[N][M];

int main()
{
    int n, m;
    int maxv = -INF, x, y;
    cout << "请输入二维数组的行数和列数" << endl;
    cin >> n >> m;

    int(*p)[M] = mat;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int &cur = *(*(p + i) + j);
            cin >> *(*(p + i) + j);
            maxv = max(maxv, cur);
            if (cur == maxv)
            {
                x = j;
                y = i;
            }
        }
    }
    cout << endl
         << "-----  Powered By Wang Chao  -----"
         << "\n\n"
         << "最大值：" << maxv << endl
         << "坐标为(" << x << ", " << y << ")" << endl;
    return 0;
}