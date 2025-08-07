/*
    Abdullah al moneem
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int x = 1;

    for (int i = 1; i <= a; i++)
    {
        x = x * i;
    }
    cout << x << endl;
    return 0;
}