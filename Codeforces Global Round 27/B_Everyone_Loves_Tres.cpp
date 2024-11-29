
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
    date: 2024-10-27 21:23:44
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
bool isDivisible(const string &num)
{
    int sumDigits = 0;
    int altSum = 0;

    for (size_t i = 0; i < num.size(); ++i)
    {
        sumDigits += (num[i] - '0');
        if (i % 2 == 0)
        {
            altSum += (num[i] - '0');
        }
        else
        {
            altSum -= (num[i] - '0');
        }
    }

    return (sumDigits % 3 == 0) && (altSum % 11 == 0) && (num.back() == '6');
}
void solve()
{
    int n;
    cin >> n;

    if (n == 1 || n == 3)
    {
        cout << -1 << endl;
        return;
    }
    else if (n == 2)
    {
        cout << 66 << endl;
        return;
    }
    else
    {
        string result;

        for (int i = 0; i < n - 4; i++)
        {
            result += '3';
        }

        if (n & 1)
        {
            result += "6366";
        }
        else
            result += "3366";

        cout << result << endl;
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
        // cout << "\n";
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/