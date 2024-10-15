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
    date: 2024-10-12 18:34:23
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int y;
    int m;
    int d;

    cin >> y;
    cin.ignore();
    cin >> m;
    cin.ignore();
    cin >> d;

    if (y < 2019)
    {
        cout << "Heisei" << endl;
    }
    else if (y > 2019)
    {
        cout << "TBD" << endl;
    }
    else
    {

        if (m < 4)
        {
            cout << "Heisei" << endl;
        }
        else if (m > 4)
        {
            cout << "TBD" << endl;
        }
        else
        {

            if (d <= 30)
            {
                cout << "Heisei" << endl;
            }
            else
            {
                cout << "TBD" << endl;
            }
        }
    }

    return 0;
}
/* Thank you */