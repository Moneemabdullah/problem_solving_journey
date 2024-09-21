/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
*/
#include <bits/stdc++.h>
using namespace std;
char g[7][7];
bool vis[7][7];
vector<pair<int, int>> dr = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
bool pos(int x, int y)
{
    if (g[x + 1][y + 1] == 'B' && g[x - 1][y - 1] == 'B' && g[x + 1][y - 1] == 'B' && g[x - 1][y + 1] == 'B')
    {
        return true;
    }

    return false;
}

bool valid(int x, int y)
{
    return (x >= 0 && x < 6 && y >= 0 && y < 6);
}
int bfs(int si, int sj)
{
    int n = 0;
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    if (pos(si, sj))
    {
        n++;
    }
    while (!q.empty())
    {

        pair<int, int> per = q.front();
        int a = per.first;
        int b = per.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = a + dr[i].first;
            int cj = b + dr[i].second;

            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                if (pos(ci, cj))
                {
                    n++;
                }
            }
        }
    }
    return n;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        memset(vis, false, sizeof(vis));
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                cin >> g[i][j];
            }
        }

        cout << bfs(0, 0) << endl;
    }

    return 0;
}
