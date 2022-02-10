#pragma GCC optimize(2)
//
// Created by sfc9982 on 2022/02/09.
//

#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

int n, k, cnt = 0;
int a[105];
bool flag[105];
vector<int> ans;

void dfs(int cur, int step)
{
    if (step > n)
    {
        ans.clear();
        return;
    }
    if (step == n && ans.size() == n)
    {
        for (auto i: ans)
//            cout << i << " ";
            printf("%d ", i);
//        cout << endl;
        printf("\n");
//        ++cnt;
        return;
    }
    for (int i = max(1, cur - k); i <= (!step ? n : min(n, cur + k)); ++i)
    {
        if (!flag[i] || !cur)
        {
            if (step < n)
            {
                flag[i] = true;
                ans.push_back(i);
                dfs(i, step + 1);
                ans.pop_back();
                flag[i] = false;
            } else
                break;
        }
    }
}

int main()
{
//    ios::sync_with_stdio(false);
//    cin.tie(nullptr), cout.tie(nullptr);

    memset(flag, false, sizeof(flag));
    scanf("%d %d", &n, &k);
    dfs(0, 0);
//    cout << cnt << endl;
    return 0;
}