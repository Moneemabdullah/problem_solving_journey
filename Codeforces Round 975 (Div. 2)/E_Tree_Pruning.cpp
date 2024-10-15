/*

         ####  ###  #   # #####        ##### ####  ##### #####
        #     #   # #   # #            #     #   # #     #
         ###  ##### #   # ####   AND   ####  ####  ####  ####
            # #   #  # #  #            #     #  #  #     #
        ####  #   #   #   #####        #     #   # ##### #####


        #####   ###   #      #####   ####  #####  ###  #   #  #####
        #   #  #   #  #      #      #        #     #   ##  #  #
        #####  #####  #      ####    ###     #     #   # # #  ####
        #      #   #  #      #          #    #     #   #  ##  #
        #      #   #  #####  #####  ####     #    ###  #   #  #####

*/
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-09-27 22:01:03
*/

#include <bits/stdc++.h>
using namespace std;

#define OLD_MAXTAN                \
    \ 
    ios_base::sync_with_stdio(0); \
    \ 
    cin.tie(0);                   \
    \ 
    cout.tie(0);

#define ll long long
#define ld long double
#define yes cout << "YES"
#define no cout << "NO"
#define pb push_back
#define vi vector<int>
#define vp vector<pair<int, int>>
#define mp map<int, int>
#define vec(v) v.begin(), v.end()
/* !    !   !   !   !   !   !   */
#define PI 3.1415926535897932384626433832795

vector<vector<int>> e;
vector<int> dp, max_dp, ct, ct2, vis;

void dfs(int u)
{
    vis[u] = true;
    max_dp[u] = dp[u];
    for (int v : e[u])
    {
        if (vis[v])
            continue;
        dp[v] = dp[u] + 1;
        dfs(v);
        max_dp[u] = max(max_dp[u], max_dp[v]);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        e.resize(n + 3);
        dp.resize(n + 3, 0);
        max_dp.resize(n + 3, 0);
        ct.resize(n + 3, 0);
        ct2.resize(n + 3, 0);
        vis.resize(n + 3, 0);
        for (int i = 1; i <= n; i++)
        {
            e[i].clear();
            vis[i] = dp[i] = max_dp[i] = ct[i] = ct2[i] = 0;
        }
        for (int i = 1; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            e[a].push_back(b);
            e[b].push_back(a);
        }
        dfs(1);
        for (int i = 1; i <= n; i++)
        {
            ++ct[dp[i]];
            ++ct2[max_dp[i]];
        }
        int res = 1e9, a = 0, b = 0;
        for (int i = 1; i <= n; i++)
            b += ct[i];
        for (int i = 1; i <= n; i++)
        {
            b -= ct[i];
            res = min(res, a + b);
            a += ct2[i];
        }
        cout << res << '\n';
    }
    return 0;
}