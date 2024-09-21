#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];
int dis[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    dis[src] = 0;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        vis[p] = true;
        for (int c : v[p])
        {
            if (!vis[c])
            {
                q.push(c);
                vis[c] = true;
                dis[c] = dis[p] + 1;
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    int r, j, cost;
    cin >> r >> j >> cost;
    bfs(r);
    if (dis[j] != -1 && dis[j] <= cost * 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
