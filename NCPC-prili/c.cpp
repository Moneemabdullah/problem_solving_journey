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

bool checkYear(int year)
{
    if (year % 400 == 0)
        return true;

    if (year % 100 == 0)
        return false;

    if (year % 4 == 0)
        return true;
    return false;
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
        int a = day_of_week(y, m, 1);
        int x = 1, z = 1;
        bool test = false;

        int arr[13] = {0, 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};

        arr[2] = checkYear(y) ? 29 : 28;
        int prev, prev_v = 0;
        if (arr[m] + a > 35)
        {
            prev = arr[m] + a - 35 - 1;
            // cout << abs(prev);
            prev_v = arr[m] - prev;
        }

        cout << "|---------------------------|" << endl
             << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|" << endl
             << "|---------------------------|" << endl;

        for (int j = 0; j < 5; j++)
        {
            for (int i = 1; i <= 7; i++)
            {
                if (a == i)
                {
                    test = true;
                }
                if (x > arr[m])
                {
                    test = false;
                }
                if (test)
                {
                    if (x < 10)
                    {
                        cout << "|  " << x << "";
                    }
                    else
                    {
                        cout << "| " << x << "";
                    }
                    x++;
                }
                else if (0 < prev_v && prev_v < arr[m])
                {
                    cout << "| " << ++prev_v << "";
                }
                else
                {
                    cout << "| - ";
                }

                if (z % 7 == 0)
                {
                    cout << '|' << endl;
                }
                z++;
            }
            cout << "|---------------------------|" << endl;
        }
        cout << endl;
    }
    return 0;
}

// #include <iostream>
// #include <string>

// using namespace std;

// unsigned day_of_week(unsigned year, unsigned month, unsigned day)
// {
//     unsigned adjustment, y, m;
//     adjustment = (14 - month) / 12;
//     y = year - adjustment;
//     m = month + (12 * adjustment) - 2;
//     // Gregorian:
//     return (day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7 + 1;
// }

// bool checkYear(int year)
// {
//     if (year % 400 == 0)
//         return true;

//     if (year % 100 == 0)
//         return false;

//     if (year % 4 == 0)
//         return true;

//     return false;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int day, month, year;

//         cin >> day >> month >> year;
//         // Skip the day of the week string
//         string day_of_week_str;
//         getline(cin, day_of_week_str);

//         int start_day = day_of_week(year, month, 1);
//         int days_in_month = (month == 2 && checkYear(year)) ? 29 : 28;
//         int current_day = 1;

//         cout << "|---------------------------|" << endl;
//         cout << "|Sun |Mon |Tue |Wed |Thu |Fri |Sat |" << endl;
//         cout << "|---------------------------|" << endl;

//         for (int week = 0; week < 6; week++)
//         {
//             for (int day = 0; day < 7; day++)
//             {
//                 if (week == 0 && day < start_day)
//                 {
//                     cout << "|    ";
//                 }
//                 else if (current_day <= days_in_month)
//                 {
//                     printf("|%4d", current_day);
//                     current_day++;
//                 }
//                 else
//                 {
//                     cout << "|    ";
//                 }
//             }
//             cout << "|" << endl;
//         }
//         cout << "|---------------------------|" << endl;
//     }
//     return 0;
// }
