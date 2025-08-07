/*
    Abdullah al moneem
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int x = 0;

    for (int i = 1; i <= a; i++)
    {
        if (x == 3)
        {
            /* code */
            cout << endl;
            return;
        }

        if (a % i == 0)
        {
            cout << i << " ";
            x++;
        }
    }

    return 0;
}