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
    // cout << t << endl;

    while (t--)
    {
        int s;
        cin >> s;
        // cout << s;

        vector<char> a;
        vector<char> b;
        for (int i = 0; i < s; i++)
        {
            char x;
            cin >> x;
            if (x == '(')
            {
                a.pb(x);
            }
            else
            {
                b.pb(x);
            }
        }

        if (a.size() == b.size())
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }

    return 0;
}
