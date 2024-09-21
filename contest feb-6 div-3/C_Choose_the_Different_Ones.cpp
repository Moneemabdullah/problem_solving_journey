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
        int count1 = 0;
        int count2 = 0;
        int a, b, k;
        cin >> a >> b >> k;
        int ar[a];
        int br[b];
        for (int i = 0; i < a; i++)
        {
            cin >> ar[i];
            if (ar[i] <= k)
            {
                count1++;
            }
            if (count1 == k / 2)
            {
                break;
            }
        }
        for (int i = 0; i < b; i++)
        {
            cin >> br[i];
            if (br[i] <= k)
            {
                count2++;
            }
            if (count2 == k / 2)
            {
                break;
            }
        }
        if (count1 == k / 2 && count2 == k / 2)
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
