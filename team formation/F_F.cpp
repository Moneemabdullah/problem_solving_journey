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
    date: 2024-10-10 18:58:22
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
/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    int n, b;
    cin >> n >> b;

    deque<int> dq;

    while (b--)
    {
        int x;
        string operation;
        cin >> operation;

        if (operation == "pushLeft")
        {
            cin >> x;
            if (dq.size() == n)
            {
                cout << "The queue is full" << endl;
            }
            else
            {
                dq.push_front(x);
                cout << "Pushed in left: " << x << endl;
            }
        }
        else if (operation == "pushRight")
        {
            cin >> x;
            if (dq.size() == n)
            {
                cout << "The queue is full" << endl;
            }
            else
            {
                dq.push_back(x);
                cout << "Pushed in right: " << x << endl;
            }
        }
        else if (operation == "popLeft")
        {
            if (dq.empty())
            {
                cout << "The queue is empty" << endl;
            }
            else
            {
                int popped_value = dq.front();
                dq.pop_front();
                cout << "Popped from left: " << popped_value << endl;
            }
        }
        else if (operation == "popRight")
        {
            if (dq.empty())
            {
                cout << "The queue is empty" << endl;
            }
            else
            {
                int popped_value = dq.back();
                dq.pop_back();
                cout << "Popped from right: " << popped_value << endl;
            }
        }
    }
}

int main()
{
    BISMILLAH

    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; ++i)
    {
        cout << "Case " << i << ":" << endl;
        solve();
        if (i < tc)
        {
            cout << endl;
        }
    }
    return 0;
}