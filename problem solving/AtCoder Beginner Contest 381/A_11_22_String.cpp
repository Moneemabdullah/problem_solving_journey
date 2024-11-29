#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string S;
    cin >> S;

    int N = S.size();

    if (N % 2 == 0)
    {
        cout << "No" << endl;
        return 0;
    }

    int mid = N / 2;

    for (int i = 0; i < mid; i++)
    {
        if (S[i] != '1')
        {
            cout << "No" << endl;
            return 0;
        }
    }

    if (S[mid] != '/')
    {
        cout << "No" << endl;
        return 0;
    }

    for (int i = mid + 1; i < N; i++)
    {
        if (S[i] != '2')
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
