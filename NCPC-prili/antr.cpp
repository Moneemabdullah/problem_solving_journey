#include <bits/stdc++.h>
using namespace std;

unsigned day_of_week(unsigned year, unsigned month, unsigned day)
{
    unsigned a, y, m;
    a = (14 - month) / 12;
    y = year - a;
    m = month + (12 * a) - 2;
    // Gregorian:
    return (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7 + 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, m, y;
        string s;

        cin >> d;
        getchar();
        cin >> m;
        getchar();
        cin >> y;
        getchar();
        cin >> s;
        // cout << day_of_week(y, m, 1) << endl;
        int a = day_of_week(y, m, 1), x = 1, z = 1;

        cout << "| -- -- -- -- -- -- -- -- -- -- -- -- -- - | " << endl
             << "| Sun | Mon | Tue | Wed | Thu | Fri | Sat |" << endl
             << "| -- -- -- -- -- -- -- -- -- -- -- -- -- - | " << endl;

        for (int j = 0; j < 5; j++)
        {
            for (int i = 1; i <= 7; i++)
            {
                // cout << "|  -  ";
                // if (a == i)
                // {
                //     cout << "|  " << x << "  ";
                //     x++;
                // }
                if (z % 7 == 0)
                {
                    cout << '|' << endl;
                }
                z++;
            }
            cout << "| -- -- -- -- -- -- -- -- -- -- -- -- -- - | " << endl;
        }
    }
    return 0;
}