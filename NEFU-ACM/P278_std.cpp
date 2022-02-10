#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>

#define N 205
#define MAX 99999999
using namespace std;
struct st {
    int x, y, step;
};
st q[20004];
const int tx[] = {0, 0, 1, -1};
const int ty[] = {1, -1, 0, 0};
char c[N][N];
bool vis[N][N];
int n, m;
int ans;

void bfs(int x, int y)
{
    memset(vis, 0, sizeof(vis));
    int front = 1, rear = 2;
    q[1].x = x;
    q[1].y = y;
    q[1].step = 0;
    vis[x][y] = 1;
    while (front < rear)
    {
        x = q[front].x;
        y = q[front].y;
        for (int z = 0; z < 4; z++)
        {
            int nx = x + tx[z];
            int ny = y + ty[z];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny])
            {
                vis[nx][ny] = 1;
                if (c[nx][ny] == '#')
                    continue;
                if (c[nx][ny] == '.')
                {
                    q[rear].step = q[front].step + 1;
                    q[rear].x = nx;
                    q[rear].y = ny;
                    rear++;
                }
                if (c[nx][ny] == 'x')
                {
                    q[rear].step = q[front].step + 2;
                    q[rear].x = nx;
                    q[rear].y = ny;
                    rear++;
                }
                if (c[nx][ny] == 'r')
                {
                    q[rear].step = q[front].step + 1;
                    ans = min(q[rear].step, ans);
                }
            }
        }
        front++;
    }
}

int main()
{
    int i, j, x, y;
    //freopen("1.txt","w",stdout);
    while (scanf("%d%d", &n, &m) != EOF)
    {
        ans = MAX;
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                cin >> c[i][j];
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                if (c[i][j] == 'a')
                {
                    x = i;
                    y = j;
                    bfs(x, y);
                }
        if (ans == 10)
            ans++;
        if (ans != MAX)
            printf("%d\m", ans);
        else
            printf("Poor ANGEL has to stay in the prison all his life.\m");
    }
    return 0;
}