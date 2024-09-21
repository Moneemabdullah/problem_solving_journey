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
        int a;
        cin >> a;
        int ar[a];

        for (int i = 0; i < a; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a - 1; j++)
            {
                if (ar[j] > ar[j + 1])
                {
                    ar[j]--;
                    ar[j + 1]++;
                }
            }
        }
        bool flag = true;

        for (int i = 1; i < a; i++)
        {
            if (ar[0] != ar[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
