/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;

#define ll long long
#define INF LLONG_MAX
#define MOD 1000000007
#define pb push_back
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll s, q;

    cin >> s;
    ll ar[s];

    for (ll i = 0; i < s; i++)
    {
        cin >> ar[i];
    }

    cin >> q;

    while (q--)
    {
        ll l, r;
        cin >> l >> r;

        ll le = l + (r - 1) - (l - 1) / 2;
        cout << le;
        ll mul1 = 1;
        ll mul2 = 1;
        ll mul4 = 1;
        ll mul3 = 1;
        // bool f = false;
        while (l < le)
        {
            mul1 = mul1 * ar[le];
            mul2 = mul2 * ar[r - 1];
            if (mul1 == 0 || mul2 == 0)
            {
                break;
            }

            l++;
            le--;
        }
        while (le < r)
        {
            mul1 = mul3 * ar[le];
            mul2 = mul4 * ar[r - 1];
            if (mul1 == 0 || mul2 == 0)
            {
                break;
            }

            le++;
            r--;
        }

        cout << mul1 << mul2 << mul3 << mul4 << "\n";
    }
}