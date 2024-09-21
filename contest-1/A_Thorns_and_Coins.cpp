/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        char c[n];
        int coin = 0;
        int gap = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (c[i] == '@')
            {
                coin++;
            }
            if (c[i] == '*' && c[i + 1] == '*')
            {
                break;
            }
        }
        cout << coin << endl;
    }

    return 0;
}
