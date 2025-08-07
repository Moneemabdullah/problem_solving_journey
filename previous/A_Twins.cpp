/*
    Abdullah al moneem
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int s;
    cin>>s;
    vector<int> v(s);
    for (int i = 0; i < s; i++) {
        cin>>v[i];
    }

    sort(v.rbegin(), v.rend());

    ll sum = 0;
    for (auto x: v) {
        sum += x;
    }

    ll x = 0;
    int ans = 0;
    for (int i = 0; i < s; i++) {
        x += v[i];
        sum -= v[i];
        ans++;
        if (x > sum) {
            break;
        }
    }
    
    cout << ans;
}
