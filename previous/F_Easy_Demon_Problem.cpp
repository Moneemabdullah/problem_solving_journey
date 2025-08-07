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
void solve()
{
    ll n,m,q,suma=0,sumb=0,x,del1,del2,i;
    bool flag;
    cin >> n >> m >> q;
    map<ll,ll>mapa,mapb;
    vector<ll>a(n),b(m);
    for(auto &x:a)
    {
        cin >> x;
        suma+=x;
        mapa[x]=1;
    }
    for(auto &x:b)
    {
        cin >> x;
        sumb+=x;
        mapb[x]=1;
    }
    while(q--)
    {
        cin >> x;
        flag=false;
        for(i=1;i<=sqrt(abs(x));i++)
        {
            if(x%i!=0)
            {
                continue;
            }
            del1=i;
            del2=x/i;


            flag|=mapb[sumb-del1] && mapa[suma-del2];
            flag|=mapb[sumb-del2] && mapa[suma-del1];
            del1*=-1;
            del2*=-1;
            flag|=mapb[sumb-del1] && mapa[suma-del2];
            flag|=mapb[sumb-del2] && mapa[suma-del1];

        }
        if(flag)
        {
             yes;
             cout<<endl;
            continue;
        }
         no;
         cout<<endl;
    }






//skibidi
}


int main()
{
    BISMILLAH

    int tc = 1;
    //cin >> tc;
    while (tc--)
    {
        // cout << "Case #" << tc++ << ": ";
        solve();
       // cout << "\n";
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/