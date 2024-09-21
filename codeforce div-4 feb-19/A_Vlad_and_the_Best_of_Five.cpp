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
        string c;
        cin >> c;
        int s = size(c);
        int a = 0;
        int b = 0;

        for (int i = 0; i < s; i++)
        {
            if (c[i] == 'A')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if (a > b)
        {
            cout << 'A' << endl;
        }
        else
        {
            cout << 'B' << endl;
        }
    }

    return 0;
}
