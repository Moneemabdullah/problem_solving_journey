#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t; // number of test cases

    while (t--)
    {
        int n;
        cin >> n; // number of indicators

        string countdown;
        cin >> countdown; // current state of the countdown

        int totalSeconds = 0;

        for (char digit : countdown)
        {
            totalSeconds += digit - '0' - 1; // seconds to decrease the digit to 0
        }

        cout << totalSeconds << endl;
    }

    return 0;
}
