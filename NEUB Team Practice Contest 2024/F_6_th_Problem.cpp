/*

         ####  ###  #   # #####        ##### ####  ##### #####
        #     #   # #   # #            #     #   # #     #
         ###  ##### #   # ####   AND   ####  ####  ####  ####
            # #   #  # #  #            #     #  #  #     #
        ####  #   #   #   #####        #     #   # ##### #####


        #####   ###   #      #####   ####  #####  ###  #   #  #####
        #   #  #   #  #      #      #        #     #   ##  #  #
        #####  #####  #      ####    ###     #     #   # # #  ####
        #      #   #  #      #          #    #     #   #  ##  #
        #      #   #  #####  #####  ####     #    ###  #   #  #####

*/
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
    date: 2024-10-12 18:51:13
*/

#include <bits/stdc++.h>
using namespace std;

#define MOD 998244353

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long ans = 1;

    for (int bit = 0; bit < 32; ++bit)
    {
        long long count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (v[i] & (1 << bit))
            {
                count++;
            }
        }

        // Calculate pairs that contribute to the current bit position
        long long pairs = count * (n - count) % MOD;

        // Each pair contributes (1 << bit) to the product
        for (long long i = 0; i < pairs; ++i)
        {
            ans = (ans * (1 << bit)) % MOD;
        }
    }
    cout << ans << endl;
    return 0;
}
/* Thank you */