/*

         ####  ###  #   # #####        ##### ####  ##### #####
        #     #   # #   # #            #     #   # #     #
         ###  ##### #   # ####   aND   ####  ####  ####  ####
            # #   #  # #  #            #     #  #  #     #
        ####  #   #   #   #####        #     #   # ##### #####


        #####   ###   #      #####   ####  #####  ###  #   #  #####
        #   #  #   #  #      #      #        #     #   ##  #  #
        #####  #####  #      ####    ###     #     #   # # #  ####
        #      #   #  #      #          #    #     #   #  ##  #
        #      #   #  #####  #####  ####     #    ###  #   #  #####

*/
/*
    Problem Name: a_Nastia_and_Nearly_Good_Numbers

    MD. abdullah al moneem

    Institute:- baIUST
    Country:- baNGLaDESH
    date: 2024-11-29 20:08:26
*/

#include <bits/stdc++.h>
using namespace std;

#define bISMILLaH                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int MaX_N = 1e5 + 5;

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
/*  --------------------SOLUTION PROGRaM-------------------------*/
void solve()
{
    ll a, b;
    cin >> a >> b;
    if (b != 1)
    {
        cout << "YES" << "\n";
        cout << (a * b) << " " << a << " " << (b + 1LL) * a << "\n";
        return;
    }
    else
    {
        cout << "NO" << "\n";
        return;
    }
}

/*  --------------------MaIN PROGRaM----------------------------*/

int main()
{
    bISMILLaH

        int tc = 1;
    cin >> tc;
    int t = 1;
    while (tc--)
    {
        // cout << "Case #" << t++ << ": ";
        solve();
        // cout << "\n";
    }
    return 0;
    /* -----------------END OF PROGRaM --------------------*/
}