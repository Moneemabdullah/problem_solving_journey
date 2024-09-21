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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int s;
    cin >> s;
    for (int j = 1; j <= s; j++)
    {
        for (int i = 1; i <= s; i++)
        {
            if (j == 1)
            {
                cout << i;
            }
            else if (i == 1)
            {
                cout << j;
            }
            else if (i == s)
            {
                cout << i;
            }
            else if (j == s)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}