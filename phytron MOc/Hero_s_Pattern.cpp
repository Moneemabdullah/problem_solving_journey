/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
*/

#include <bits/stdc++.h>
using namespace std;

#define cY cout << "YES" << endl
#define cN cout << "NO" << endl

int main()
{
    int s;
    cin >> s;

    int k = s - 1;
    int x = s;
    int ms = 0;
    for (int j = 1; j < 2 * s; j++)
    {

        for (int i = 0; i < k; i++)
        {
            cout << " ";
        }
        for (int i = 0; i < x; i++)
        {
            cout << "*";
        }
        for (int i = 0; i < ms; i++)
        {
            cout << " ";
        }
        for (int i = 0; i < x; i++)
        {
            cout << "*";
        }
        cout << endl;
        if (j < s)
        {
            k--;
            x--;
            ms += 4;
        }
        else
        {
            k++;
            x++;
            ms -= 4;
        }
    }
    return 0;
}