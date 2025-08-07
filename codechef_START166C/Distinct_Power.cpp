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
void solve() {
    int n;
    cin >> n;

    vi a(n);
    vin(a);

    vi b = a;
    sort(u_pura(b));

    map<int, int> r;
    for (int i = 0; i < n; i++) r[b[i]] = i + 1;

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<r[a[i]]<<" ";
    // }
    

    set<string> s;

    for (int i = 0; i < n; i++) {
        vi c;
        for (int j = 0; j < n; j++) {
            if (j != i) c.push_back(a[j]);
        }

        vi d = c;
        sort(u_pura(d));

        map<int, int> nr;
        for (int j = 0; j < n - 1; j++) nr[d[j]] = j + 1;

        vi ra;
        for (int j = 0; j < n; j++) {
            if (j != i) ra.push_back(nr[a[j]]);
        }

        stringstream ss;
        for (int x : ra) ss << x << ",";
        s.insert(ss.str());
    }



    cout << s.size();
}


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