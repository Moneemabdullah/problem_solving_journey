/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
*/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define INF LLONG_MAX
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

    while (t--)
    {
        int s;
        cin >> s;
        char a[s];
        int flag = 0;
        int back = 0;
        for (int i = 0; i < s; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < s; i++)
        {
            if (a[i] == 'B')
            {
                flag = i;
                break;
            }
        }
        for (int i = s - 1; i >= 0; i--)
        {
            if (a[i] == 'B')
            {
                back = i;
                break;
            }
        }
        int x = 0;
        for (int i = flag; i < back + 1; i++)
        {
            x++;
        }
        cout << x << endl;
    }

    return 0;
}
