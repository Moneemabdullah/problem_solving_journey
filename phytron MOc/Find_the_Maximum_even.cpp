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
    int s[t];
    for (int i = 0; i < t; i++)
    {
        cin >> s[i];
    }
    int sum;
    for (int i = 0; i < t - 1; i++)
    {
        for (int j = 1; j < t; j++)
        {
            int x = s[i] + s[j];
            if (i != j && x % 2 == 0 && sum < x)
            {
                sum = x;
            }
        }
    }
    int sum2 = 0;
    for (int i = 0; i < t; i++)
    {
        if (s[i] % 2 == 0 && sum < s[i])
        {
            sum2 = s[i];
        }
    }

    cout << max(sum, sum2) << endl;
    return 0;
}
