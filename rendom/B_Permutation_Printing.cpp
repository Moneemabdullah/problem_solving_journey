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
    Problem Name: B_Permutation_Printing

    MD. Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-11-21 21:14:45
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
// void solve()
// {
//     /* Lets GO */

//     int n;
//     cin >> n;
//     int jor = 2;
//     int bijor = 1;
//     for (int i = 1; i <= n; i++)
//     {

//         if (i & 1)
//         {
//             cout << jor << " ";
//             jor = jor + 2;
//         }
//         else
//         {
//             cout << bijor << " ";

//             bijor = bijor + 2;
//         }
//     }
// }
void solve()
{
    /* Lets GO */

    int n;
    cin >> n;
    int jor = n;
    int bijor = 1;
    for (int i = 1; i <= n; i++)
    {

        if (i & 1)
        {
            cout << jor-- << " ";
        }
        else
        {
            cout << bijor++ << " ";
        }
    }
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