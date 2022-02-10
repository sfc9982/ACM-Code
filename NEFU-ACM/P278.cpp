#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

const int N = 210;

int mark[N][N];
char c[N][N];

int n, m, startx, starty, len, minl;

void dfs(int x, int y, int len)
{
    if (x < 0 || x >= n || y < 0 || y >= m || mark[x][y] == 1) return;//边界判定
    if (len >= minl || c[x][y] == '#') return;//边界判定2
    if (c[x][y] == 'r')//到达终点
    {
        if (len < minl) minl = len;
        return;
    }
    if (c[x][y] == 'x') len++;//杀守卫
    mark[x][y] = 1;
    dfs(x + 1, y, len + 1);//继续dfs
    dfs(x - 1, y, len + 1);
    dfs(x, y + 1, len + 1);
    dfs(x, y - 1, len + 1);
    mark[x][y] = 0;//还原
}

int main()
{
    while (cin >> n >> m)
    {
        memset(mark, 0, sizeof(mark));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> c[i][j];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (c[i][j] == 'a')
                {
                    startx = i;
                    starty = j;
                }
        len = 0;
        minl = 99999;
        dfs(startx, starty, len);
        if (minl == 10) minl++;
        if (minl < 99999) cout << minl << endl;
        else cout << "Poor ANGEL has to stay in the prison all his life." << endl;
    }
    return 0;
}