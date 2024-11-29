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
    Problem Name: A_1_Balanced_Shuffle_Easy

    MD. Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-11-21 20:33:15
*/

#include <bits/stdc++.h>
using namespace std;

#define BISMILLAH                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int MAX_N = 1e5 + 5;

#define ll long long
#define pb push_back
#define F first
#define S second
#define no cout << "NO"
#define yes cout << "YES"
#define endl "\n"
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define vi vector<int>
#define vll vector<long long>
#define pura(a) (a).begin(), (a).end()
#define u_pura(a) (a).rbegin(), (a).rend()

#define vin(a)         \
    for (auto &it : a) \
        cin >> it;
#define vout(a)            \
    for (auto &it : a)     \
        cout << it << " "; \
    cout << "\n";

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
ll factorial(ll n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
/*  --------------------SOLUTION PROGRAM-------------------------*/
bool cmp(pair<int, char> a, pair<int, char> b)
{
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    else
    {
        return a.first < b.first;
    }
}
void solve()
{
    /* Lets GO */
    string a;
    cin >> a;
    ll c = 0;

    vector<pair<ll, ll>> v;
    for (ll i = 0; i < a.size(); i++)
    {
        v.push_back({c, i});
        c += (a[i] == '(') - (a[i] == ')');
    }
    sort(pura(v), cmp);
    for (ll i = 0; i < a.size(); i++)
    {
        cout << a[v[i].second];
    }
}

/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    BISMILLAH

    int tc = 1;
    // cin >> tc;
    int t = 1;
    while (tc--)
    {
        // cout << "Case #" << t++ << ": ";
        solve();
        cout << "\n";
    }
    return 0;
    /* -----------------END OF PROGRAM --------------------*/
}