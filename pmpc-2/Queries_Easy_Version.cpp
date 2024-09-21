/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
*/
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vl vector<ll>
#define vvl vector<vector<ll>>

int main()
{

    int t;
    cin >> t;
    priority_queue<int, vector<int>, greater<int>> even;
    priority_queue<int, vector<int>, greater<int>> odd;
    while (t--)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            int v;
            cin >> v;
            if (v % 2 == 0)
            {
                even.push(v);
            }
            else
            {
                odd.push(v);
            }
        }
        else if (q == 2)
        {
            if (even.empty())
            {
                cout << "empty" << endl;
            }
            else
            {
                cout << even.top() << endl;
                even.pop();
            }
        }
        else if (q == 3)
        {
            if (odd.empty())
            {
                cout << "empty" << endl;
            }
            else
            {
                cout << odd.top() << endl;
                odd.pop();
            }
        }
    }

    return 0;
}
