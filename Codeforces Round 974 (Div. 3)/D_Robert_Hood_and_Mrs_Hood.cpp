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
    date: 2024-09-21 21:32:49
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
    int n, d, k;
    cin >> n >> d >> k;

    vector<int> impact(n + 2, 0);

    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;
        impact[l]++;
        if (r + 1 <= n)
        {
            impact[r + 1]--;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        impact[i] += impact[i - 1];
    }

    int maxOverlaps = -1, minOverlaps = k + 1;
    int brotherDay = 1, motherDay = 1;
    int currentOverlaps = 0;

    for (int i = 1; i <= d; i++)
    {
        currentOverlaps += impact[i];
    }

    maxOverlaps = currentOverlaps;
    minOverlaps = currentOverlaps;

    for (int start = 2; start <= n - d + 1; start++)
    {
        currentOverlaps -= impact[start - 1];
        currentOverlaps += impact[start + d - 1];

        if (currentOverlaps > maxOverlaps)
        {
            maxOverlaps = currentOverlaps;
            brotherDay = start;
        }

        if (currentOverlaps < minOverlaps)
        {
            minOverlaps = currentOverlaps;
            motherDay = start;
        }
        else if (currentOverlaps == minOverlaps && start < motherDay)
        {
            motherDay = start;
        }
    }

    cout << brotherDay << " " << motherDay;
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
