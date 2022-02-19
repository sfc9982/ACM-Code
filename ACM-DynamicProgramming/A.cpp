//
// Created by sfc9982 on 2022/02/15.
//

#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#include<cmath>
#include<map>
#include<set>

using namespace std;
const int INF = 0x3f3f3f3f;

int n;
int num[5];
char s[5] = {'W', 'I', 'N', 'G'};
char a[5][20][2];
char str[250];
int f[250][250][30];
int mp[300];

int dfs(int l, int r, int k)
{
    int &ans = f[l][r][k];
    if (ans != -1)
        return ans;
    if (l == r)
        return f[l][r][k] = (s[k] == str[l]);
    for (int i = l; i < r; i++)
    {
        for (int j = 0; j < num[k]; j++)
        {
            ans = dfs(l, i, mp[(int) (unsigned char) a[k][j][0]]) &&
                  dfs(i + 1, r, mp[(int) (unsigned char) a[k][j][1]]);
            if (ans == 1)
                break;
        }
        if (ans == 1)
            break;
    }
    if (ans == 1)
        return 1;
    else
        return 0;
}


int main()
{
    memset(f, -1, sizeof(f));
    mp['W'] = 0;
    mp['I'] = 1;
    mp['N'] = 2;
    mp['G'] = 3;
    for (int i = 0; i < 4; i++)
        scanf("%d", &num[i]);
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < num[i]; j++)
            scanf("%s", a[i][j]);
    scanf("%s", str + 1);
    n = strlen(str + 1);
    bool flag = false;
    if (dfs(1, n, 0)) printf("W"), flag = true;
    if (dfs(1, n, 1)) printf("I"), flag = true;
    if (dfs(1, n, 2)) printf("N"), flag = true;
    if (dfs(1, n, 3)) printf("G"), flag = true;
    if (flag)
        puts("");
    if (!flag)
        puts("The name is wrong!");
    return 0;
}