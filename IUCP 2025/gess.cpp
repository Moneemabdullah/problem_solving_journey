/*
    Abdullah al moneem
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll n, l;
    cin >> n >> l;

    // cout << log(abs(n - l));
    ll x = abs(l - n);

    ll ans = 0;
    while (x / 2)
    {
        ans++;
        x = x / 2;
    }

    cout << max(1LL, ans) << endl;
    return 0;
}