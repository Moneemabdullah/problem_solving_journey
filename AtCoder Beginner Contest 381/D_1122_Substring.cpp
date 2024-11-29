#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin >> s;

    vector<int> v(s);
    for (int i = 0; i < s; i++)
    {
        cin >> v[i];
    }

    int left = 0, count_1 = 0, count_2 = 0, maxLength = 0;

    for (int right = 0; right < s; right++)
    {

        if (v[right] == 1)
        {
            count_1++;
        }
        else if (v[right] == 2)
        {
            count_2++;
        }

        while (count_2 > count_1)
        {
            if (v[left] == 1)
            {
                count_1--;
            }
            else if (v[left] == 2)
            {
                count_2--;
            }
            left++;
        }

        if (count_1 == count_2)
        {
            maxLength = max(maxLength, right - left + 1);
        }
    }

    cout << maxLength << endl;

    return 0;
}
