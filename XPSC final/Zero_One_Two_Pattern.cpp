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
    int a[3] = {1, 2, 0};
    int l = (2 * s) - 1;
    int f = 1;
    for (int j = 0; j < 2 * s - 1; j++)
    {

        for (int i = 1; i < 2 * s; i++)
        {
            if (i == l || i == f)
            {
                cout << a[(j % 3)];
            }
            else
            {
                cout << " ";
            }
        }

        l--;
        f++;
        cout << endl;
    }
}