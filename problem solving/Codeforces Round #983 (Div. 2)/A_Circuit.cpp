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
    date: 2024-11-01 20:42:43
*/

#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define BISMILLAH                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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

/* PRINTS */
template <class T>
void print_v(vector<T> &v)
{
    cout << "{";
    for (auto x : v)
        cout << x << ",";
    cout << "\b}";
}

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    int s;
    cin >> s;
    int c_a = 0;
    int c_0 = 0;

    for (int i = 0; i < s * 2; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            c_a++;
        }
        else
        {
            c_0++;
        }
    }

    int max_on = min(c_a, s);
    if (c_a == 0 || c_0 == 0)
    {
        cout << "0 0";
    }
    else if (c_0 > c_a)
    {
        cout << max(0, c_a - c_0) << " " << max_on;
    }
    else if (c_a == c_0 and s == 1)
    {
        cout << max_on << " " << max_on;
    }
    else
    {
        cout << c_a / 2 << " " << max_on;
    }
}

/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    BISMILLAH

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        // cout << "Case #" << tc++ << ": ";
        solve();
        cout << "\n";
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/