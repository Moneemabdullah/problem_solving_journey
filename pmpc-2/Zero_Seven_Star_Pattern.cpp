/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            int k = s;

            if (j == i || j == s - i - 1)
            {
                cout << "*";
            }
            else if (j < i)
            {
                cout << 0;
            }
            else if (j < s)
            {
                cout << 7;
            }
            // else
            // {
            //     cout << 0;
            // }
        }
        cout << endl;
    }

    return 0;
}