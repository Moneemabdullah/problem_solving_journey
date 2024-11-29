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
    date: 2024-11-22 18:34:22
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    if (S.length() % 2 != 0)
    {
        cout << "No";
        return 0;
    }

    unordered_map<char, int> freq;
    for (char c : S)
        freq[c]++;

    for (const auto &entry : freq)
    {
        if (entry.second != 2)
        {
            cout << "No";
            return 0;
        }
    }

    for (int i = 0; i < S.length(); i += 2)
    {
        if (S[i] != S[i + 1])
        {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    cout << endl;
    return 0;
}
/* Thank you */