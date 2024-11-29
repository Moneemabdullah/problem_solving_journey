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
    date: 2024-10-28 21:55:59
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
#define vi vector<long long>
// #define vll vector<long long>
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

vi prefix_sum_b(vi b)
{
    int m = b.size();
    vi prefixB(m + 1, 0);

    for (int i = 1; i <= m; ++i)
    {
        prefixB[i] = prefixB[i - 1] + b[i - 1];
    }

    return prefixB;
}
vi make_b(vi &a)
{
    int n = a.size();
    vi b;
    vi sum(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        sum[i] = sum[i - 1] + a[i - 1];
    }

    for (int l = 1; l <= n; ++l)
    {
        for (int r = l; r <= n; ++r)
        {
            b.push_back(sum[r] - sum[l - 1]);
        }
    }

    return b;
}
/*  --------------------SOLUTION PROGRAM-------------------------*/
// void solve()
// {
//     int n;
//     cin >> n;

//     vi a(n);
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> a[i];
//     }
//     vi pr_a(n + 1, 0);
//     for (int i = 1; i <= n; ++i)
//     {
//         pr_a[i] = pr_a[i - 1] + a[i - 1];
//     }

//     int total_b = (n * (n + 1)) / 2;

//     vi pr_b(total_b + 1, 0);
//     int index = 1;

//     for (int l = 1; l <= n; ++l)
//     {
//         for (int r = l; r <= n; ++r)
//         {
//             ll s_lr = pr_a[r] - pr_a[l - 1];
//             pr_b[index] = pr_b[index - 1] + s_lr;
//             index++;
//         }
//     }
//     int q;
//     cin >> q;
//     while (q--)
//     {
//         int l, r;
//         cin >> l >> r;
//         ll ans = pr_b[r] - pr_b[l - 1];
//         cout << ans << endl;
//     }
// }
void solve()
{
    int n;
    cin >> n;

    vi a(n);
    vin(a);

    vi prefix(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        prefix[i] = prefix[i - 1] + a[i - 1];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        ll sum = 0;
        int index = 1;

        for (int L = 1; L <= n; ++L)
        {
            for (int R = L; R <= n; ++R)
            {
                ll s_lr = prefix[R] - prefix[L - 1];
                if (index >= l && index <= r)
                {
                    sum += s_lr;
                }
                index++;
            }
        }

        cout << sum << endl;
    }
}
/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    BISMILLAH

    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        // cout << "Case #" << tc++ << ": ";
        solve();
        // cout << "\n";
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/