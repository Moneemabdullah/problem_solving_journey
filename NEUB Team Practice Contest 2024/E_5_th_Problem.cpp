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
    date: 2024-10-12 19:51:58
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;
    long long ans = x;

    while (x != 0)
    {
        if (x % 3 == 2)
        {
            x += 1;
        }
        x = x / 3;

        ans += x;
    }

    cout << ans << endl;

    return 0;
}
/* Thank you */
