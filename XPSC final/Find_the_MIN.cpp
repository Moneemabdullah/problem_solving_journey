/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
*/

#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;

#define ll long long
#define INF LLONG_MAX
#define MOD 1000000007
#define pb push_back
#define vvi vector<vector<int>>
#define vpi vector<pair<int, int>>

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    set<int> pq;
    while (q--)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            int val;
            cin >> val;
            pq.insert(val);
        }
        else
        {
            if (!pq.empty())
            {
                cout << *pq.begin() << "\n";
                pq.erase(pq.begin());
            }
            else
            {
                cout << "empty\n";
            }
        }
    }
    return 0;
}
