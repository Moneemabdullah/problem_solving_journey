/**
 *    بِسْمِ ٱللَّٰهِ ٱلرَّحْمَٰنِ ٱلرَّحِيمِ
 *    In the Name of Allah, the Beneficent, the Merciful.
 *    Author: XXXXX
 *    Date: 2024-10-10 18:59:56
 **/

#include <bits/stdc++.h>
using namespace std;

#define MIN INT_MIN
#define MAX INT_MAX
#define PI 3.141592653589793238
#define MOD 1e9 + 7
#define LLM 1e18 + 7
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define pura(a) (a).begin(), (a).end()
#define u_pura(a) (a).rbegin(), (a).rend()
#define vin(a)         \
    for (auto &it : a) \
        cin >> it;
#define vout(a)            \
    for (auto &it : a)     \
        cout << it << " "; \
    cout << "\n";
#define pb push_back
#define eb emplace_back
#define f first
#define se second
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define NEG1 cout << -1 << endl

#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))

#define matha                    \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

// fastIO
void challu()
{
#ifndef ONLINE_JUDGE
// freopen("input.txt", "r", stdin);
// freopen("output.txt","w",stdout);
#endif // ONLINE_JUDGE
}

// SOLVE
void solve()
{
    int p;
    cin >> p;
    map<string, int> mp;
    while (p--)
    {
        int x;
        cin >> x;
        string s;
        switch (x)
        {
        case 0:
            int n;
            cin >> s >> n;
            mp.insert({s, n});
            break;

        case 1:
            cin >> s;
            if (mp.find(s) != mp.end())
            {
                cout << mp[s] << endl;
            }
            else
            {
                cout << "0" << endl;
            }
            break;

        case 2:
            // string s;
            cin >> s;
            mp.erase(s);
            break;

        case 3:
            string a, b;
            cin >> a >> b;
            auto lb = mp.lower_bound(a);
            auto ub = mp.upper_bound(b);
            for (auto i = lb; i != ub; i++)
                cout << i->first << " " << i->second << endl;
            break;
        }
    }
}

// Test_Case read
void tc_r()
{
    // int t = 1;
    // cin >> t;
    // while (t--)
    // {
    solve();
    // }
}

int main()
{
    challu();
    matha;
    tc_r();
    return 0;
}