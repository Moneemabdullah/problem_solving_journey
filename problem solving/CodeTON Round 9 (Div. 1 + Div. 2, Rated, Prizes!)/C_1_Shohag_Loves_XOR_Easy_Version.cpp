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
    Problem Name: C_1_Shohag_Loves_XOR_Easy_Version

    MD. Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-11-23 21:07:14
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
void solve()
{
    ll x, m;
    cin >> x >> m;

    ll ans = 0;
    // ll binary_digits = 0;
    // ll y = x;
    // while (y > 0)
    // {
    //     binary_digits++;
    //     y /= 2;
    // }
    ll binary_digits = (x > 0) ? (ll)log2(x) + 1 : 1;

    ll largest = (1LL << binary_digits) - 1;

    // cout << binary_digits << " " << largest << " ";

    for (ll i = 1; i <= min(largest, m); i++)
    {
        if (i == x)
            continue;

        ll xorval = x ^ i;

        if ((x % xorval == 0) || (i % xorval == 0))
        {
            ans++;
        }
    }

    cout << ans;
}

/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    BISMILLAH

    int tc = 1;
    cin >> tc;
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