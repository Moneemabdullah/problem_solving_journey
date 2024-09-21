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
        int x;
        cin >> x;
        char alp[26];

        for (int i = 0; i < 26; i++)
        {
            alp[i] = 'a' + i;
        }
        if (x > 26)
        {
            int c = 26;
            int b;
            x -= 26;
            if (x > 26)
            {
                b = 26;
                x -= 26;
            }
            else
            {
                b = x - 1;
                x -= b;
            }

            cout << alp[x - 1] << alp[b - 1] << alp[c - 1] << endl;
        }
        else
        {
            int c = x - 3;
            cout << alp[0] << alp[0] << alp[c] << endl;
        }
    }
    return 0;
}