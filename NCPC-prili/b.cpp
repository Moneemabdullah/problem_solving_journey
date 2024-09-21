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
        list<string> l;
        int q;
        cin >> q;
        while (q--)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                string s;
                cin >> s;
                int num;
                cin >> num;
                string ss;
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] > 47 && s[i] < 58)
                    {
                        int cont = int(s[i]) - 48;
                        while (cont--)
                        {
                            ss.push_back(s[i - 1]);
                        }
                    }
                }
                while (num--)
                {
                    l.push_back(ss);
                }
            }
            else if (x == 2)
            {
                string s;
                cin >> s;
                int num;
                cin >> num;
                string ss;
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] > 47 && s[i] < 58)
                    {
                        int cont = int(s[i]) - 48;
                        while (cont--)
                        {
                            ss.push_back(s[i - 1]);
                        }
                    }
                }
                while (num--)
                {
                    l.remove(s);
                }
            }
            else if (x == 3)
            {
                string s1;
                string s2;
                cin >> s1 >> s2;
                string ss1, ss2;
                for (int i = 0; i < s1.size(); i++)
                {
                    if (s1[i] > 47 && s1[i] < 58)
                    {
                        int cont = int(s1[i]) - 48;
                        while (cont--)
                        {
                            ss1.push_back(s1[i - 1]);
                        }
                    }
                }
                for (int i = 0; i < s2.size(); i++)
                {
                    if (s2[i] > 47 && s2[i] < 58)
                    {
                        int cont = int(s2[i]) - 48;
                        while (cont--)
                        {
                            ss2.push_back(s2[i - 1]);
                        }
                    }
                }

                for (auto)
                {
                    /* code */
                }
            }
        }
    }

    return 0;
}
