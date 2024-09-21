/*
                    MD Abdullah al moneem
Bangladesh Army International University of Science and Technology
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int s;
        cin >> s;
        char g[s][s];
        int count[s];
        memset(count, 0, sizeof(count));
        for (int i = 0; i < s; i++)
        {
            for (int j = 0; j < s; j++)
            {
                cin >> g[i][j];

                if (g[i][j] == '1')
                {
                    count[i]++;
                }
            }
        }
        bool triangle = false;
        for (int i = 0; i < s - 1; i++)
        {

            if (count[i] != 0 && count[i] == '1')
            {

                triangle = true;
                break;
            }
        }

        if (triangle)
        {
            cout << "TRIANGLE" << endl;
        }
        else
        {
            cout << "SQUARE" << endl;
        }
    }

    return 0;
}
