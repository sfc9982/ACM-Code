#include <cstring>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int N = 1e5 + 10;
vector<pair<int, int>> E[N];

void add(int x, int y, int len)
{
    E[x].push_back({y, len});
    E[y].push_back({x, len});
}

long long dis[N];
bool vis[N];

using PIL = pair<long long, int>;

void dij()
{
    memset(dis, 0x3f, sizeof(dis));
    priority_queue<PIL, vector<PIL>, greater<PIL>> qu;
    qu.push({0, 0});
    dis[0] = 0;
    while (qu.size())
    {
        long long ds = qu.top().first;
        int st = qu.top().second;
        qu.pop();
        if (vis[st]) continue;
        vis[st] = true;

        for (int i = 0; i != E[st].size(); i++)
        {
            int to = E[st][i].first;
            if (vis[to]) continue;
            int len = E[st][i].second;
            if (dis[to] > ds + len)
            {
                dis[to] = ds + len;
                qu.push({dis[to], to});
            }
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int x, y, len;
        scanf("%d%d%d", &x, &y, &len);
        add(x, y, len);
    }

    int s;
    cin >> s;

    for (int i = 1; i <= s; i++)
    {
        int x;
        scanf("%d", &x);
        add(0, x, 0);
    }

    int q;
    cin >> q;
    dij();
    while (q--)
    {
        int x;
        scanf("%d", &x);
        if (dis[x] > 1e14)
        {
            puts("-1");
        } else
        {
            printf("%lld\n", dis[x]);
        }
    }

    return 0;
}