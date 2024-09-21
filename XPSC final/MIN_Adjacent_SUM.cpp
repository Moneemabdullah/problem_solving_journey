/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e9 + 5;

#define ll long long
#define INF LLONG_MAX
#define MOD 1000000007
#define pb push_back
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

void solve()
{
    int s;
    cin >> s;
    int ar[s];
    for (int i = 0; i < s; i++)
    {
        cin >> ar[i];
        // cout << s << " ";
    }
    int f = MAX_N;
    int g = MAX_N;
    int pos = -1;
    for (int i = 0; i < s; i++)
    {
        if (f > ar[i])
        {
            f = ar[i];
            pos = i;
        }
    }

    for (int i = 0; i < s; i++)
    {
        if (g > ar[i] && i != pos)
        {
            g = ar[i];
        }
    }

    cout << f + g << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}