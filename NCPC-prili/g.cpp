#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    int k = 1;
    while (k <= t)
    {
        int n;
        cin >> n;
        long long arr1[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        long long arr2[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
            if (arr1[i] != arr2[i])
                count++;
        }

        cout << "Case " << k << ": " << count << endl;

        k++;
    }

    return 0;
}