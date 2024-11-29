/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define INF LLONG_MAX
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<ll>
#define vvl vector<vector<ll>>

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int s;
        string a;
        cin >> s >> a;

        int ans = a[0];
        for (int i = 1; i < s; i++)
        {
            ans = max((a[i] - 'a') + 1, max);
        }
        cout << ans << endl;
    }

    return 0;
}
