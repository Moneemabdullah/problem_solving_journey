#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    string s;
    cin >> s;
    int ans = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '/')
        {
            int one = 0, two = 0;
            int l = i - 1;
            int r = i + 1;

            while (l >= 0 && s[l] == '1')
            {
                one++;
                l--;
            }
            while (r < s.size() && s[r] == '2')
            {
                two++;
                r++;
            }

            int valid_length = 1 + 2 * min(one, two);
            ans = max(ans, valid_length);
        }
    }

    cout << ans << endl;
    return 0;
}
