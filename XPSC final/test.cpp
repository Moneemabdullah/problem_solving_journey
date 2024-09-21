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
map<int, int> mp;

class cmp
{
public:
    bool operator()(int a, int b) const
    {
        if (mp[a] != mp[b])
        {

            return mp[a] < mp[b];
        }

        return a < b;
    }
};

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    priority_queue<int, vector<int>, cmp> pq;

    while (q--)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int val;
            cin >> val;
            mp[val]++;
            if (mp[val] == 1)
                pq.push(val);
        }
        else
        {
            if (!pq.empty())
            {
                int val = pq.top();
                cout << val << "\n";
                while (!pq.empty() && mp[pq.top()] == mp[val])
                {
                    mp[pq.top()] = 0;
                    pq.pop();
                }
            }
            else
            {
                cout << "empty\n";
            }
        }
    }
    return 0;
}