/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
*/
#include <bits/stdc++.h>
using namespace std;

string cons(vector<int> &v)
{
    string a;
    for (int i = 0; i < v.size(); i++)
    {
        char ch = 'a' + v[i];
        a += ch;
    }
    return a;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int s;
        cin >> s;
        vector<int> v;
        for (int i = 0; i < s; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        string a = cons(v);

        cout << a << endl;
    }

    return 0;
}
