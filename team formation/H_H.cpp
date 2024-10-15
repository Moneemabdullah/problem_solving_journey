/*
    MD Rifat

    country Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> lec(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> lec[i];
//     }

//     int total = 0;
//     int maxLec = 0;

//     for (int i = 0; i < n; i++)
//     {
//         total += lec[i];
//         maxLec = max(maxLec, lec[i]);
//     }

//     if (maxLec <= (total - maxLec) + 1)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    long long total = 0;
    for (int i = 0; i < n; i++)
    {
        total += v[i];
    }

    int mx = *max_element(v.begin(), v.end());

    if (mx > (total + 1) / 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}