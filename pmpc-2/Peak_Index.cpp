#include <bits/stdc++.h>
using namespace std;

int find(vector<int> n, int s)
{
    if (s < 3)
    {
        return 0;
    }
    vector<int> ps(s, 0);
    ps[0] = n[0];
    for (int i = 1; i < s; i++)
    {
        ps[i] = ps[i - 1] + n[i];
    }
    int c = 0;
    for (int i = 1; i < s - 1; i++)
    {
        int l = ps[i - 1];
        int r = ps[s - 1] - ps[i];
        if (l == r)
        {
            c++;
        }
    }
    return c;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int s;
        cin >> s;
        vector<int> n(s);
        for (int i = 0; i < s; i++)
        {
            cin >> n[i];
        }
        int r = find(n, s);
        cout << r << endl;
    }

    return 0;
}
