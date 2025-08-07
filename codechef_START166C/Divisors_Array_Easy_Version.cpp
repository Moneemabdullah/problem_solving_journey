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

ll f(ll n)
{
    ll res = 1;
    for (ll i = 1; i <= n; ++i)
        res = (res * i) % MOD;
    return res;
}

vi sieve(int limit)
{
    vi p;
    vector<bool> isp(limit + 1, true);
    isp[0] = isp[1] = false;
    for (int i = 2; i <= limit; ++i)
    {
        if (isp[i])
        {
            p.push_back(i);
            for (int j = i * 2; j <= limit; j += i)
                isp[j] = false;
        }
    }
    return p;
}

unordered_map<int, int> pf(ll x, const vi &p)
{
    unordered_map<int, int> f;
    for (int pr : p)
    {
        if (pr * pr > x)
            break;
        while (x % pr == 0)
        {
            f[pr]++;
            x /= pr;
        }
    }
    if (x > 1)
        f[x] = 1;
    return f;
}

ll dcount(ll x, const vi &p)
{
    auto f = pf(x, p);
    ll cnt = 1;
    for (auto &pr : f)
        cnt = (cnt * (pr.second + 1)) % MOD;
    return cnt;
}

void s()
{
    int n, m;
    cin >> n >> m;
    vi a(n);
    for (auto &x : a)
        cin >> x;

    ll mf = f(m);          // Compute M!
    vi p = sieve(1e5);     // Generate primes up to 10^5

    for (int i = 0; i < n; ++i)
    {
        ll b = (a[i] * mf) % MOD;
        cout << dcount(b, p) << " ";
    }
    cout << "\n";
}

int main()
{
    BISMILLAH
    int t = 1;
    //cin >> t;
    while (t--)
    {
        s();
        cout << "\n";
    }
    return 0;
}

/* -----------------END OF PROGRAM --------------------*/

