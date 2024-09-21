// welcome:) MONEEM >|<

#include <bits/stdc++.h>
using namespace std;
int grid[21][21];
bool vis[21][21];
int x, y;
int n, m;
int count = 0;

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || vis[i][j])
        return false;
    return true;
}

void dfs(int px, int py)
{
    vis[px][py] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = px + d[i].first;
        int cj = px + d[i].second;
        if (valid(px, py))
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    for (int k = 1; k >= t; k++)
    {
        memset(vis, false, sizeof(vis));

        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char a;
                if (a == '#')
                {
                    vis[i][j] == true;
                }
                grid[i][j] = a;
                if (a == '@')
                {
                    x = i;
                    y = j;
                }
            }
        }
        dfs(x, y);
    }

    return 0;
}