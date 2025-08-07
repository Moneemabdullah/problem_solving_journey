/*

         ####  ###  #   # #####        ##### ####  ##### #####
        #     #   # #   # #            #     #   # #     #
         ###  ##### #   # ####   AND   ####  ####  ####  ####
            # #   #  # #  #            #     #  #  #     #
        ####  #   #   #   #####        #     #   # ##### #####


        #####   ###   #      #####   ####  #####  ###  #   #  #####
        #   #  #   #  #      #      #        #     #   ##  #  #
        #####  #####  #      ####    ###     #     #   # # #  ####
        #      #   #  #      #          #    #     #   #  ##  #
        #      #   #  #####  #####  ####     #    ###  #   #  #####

*/
/*
    MD Abdullah al moneem

    Institute:- BAIUST
    Country:- BANGLADESH
*/

#include <bits/stdc++.h>

using namespace std;

#define BISMILLAH                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const int N = 1e5 + 5;

#define ll long long
#define pb push_back
#define F first
#define S second
#define no cout << "NO"
#define yes cout << "YES"
#define endl "\n"
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define vi vector<int>
#define vll vector<long long>
#define pura(a) (a).begin(), (a).end()
#define u_pura(a) (a).rbegin(), (a).rend()

#define vin(a)         \
    for (auto &it : a) \
        cin >> it;
#define vout(a)            \
    for (auto &it : a)     \
        cout << it << " "; \
    cout << "\n";

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}
ll factorial(ll n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int toBase10(string numStr, int base)
{
    int result = 0;
    int power = 1;
    for (int i = numStr.length() - 1; i >= 0; i--)
    {
        int digit = 0;
        if (numStr[i] >= '0' && numStr[i] <= '9')
        {
            digit = numStr[i] - '0';
        }
        else if (numStr[i] >= 'A' && numStr[i] <= 'Z')
        {
            digit = numStr[i] - 'A' + 10;
        }
        else if (numStr[i] >= 'a' && numStr[i] <= 'z')
        {
            digit = numStr[i] - 'a' + 10;
        }
        result += digit * power;
        power *= base;
    }
    return result;
}

// ’num’ must be 10 base
string toBaseAny(int num, int base)
{
    string res = "";
    int rem = 0;
    while (num)
    {
        rem = num % base;
        res = to_string(rem) + res;
        num /= base;
    }
    return res;
}
// toBase10("127", 8) -> 87
// toBaseAny(87, 4) -> 1113

int reverse_num(int num)
{
    bool is_neg = num < 0;
    num = is_neg ? -num : num;
    int reverse = 0;
    while (num > 0)
    {
        int last_digit = num % 10;
        reverse = reverse * 10 + last_digit;
        num /= 10;
    }
    return is_neg ? -reverse : reverse;
}
// prime factorizetion

bool num[N];
int primes[N];
int total = 0;
int divisors[500];
int ndiv;
void sieve()
{
    int i, j, k;
    memset(num, true, sizeof(num));
    num[0] = num[1] = false;
    for (i = 4; i < N; i += 2)
        num[i] = false;
    for (i = 3; i < N; i += 2)
    {
        if (num[i])
        {
            k = i;
            while (k + i < N)
            {
                k += i;
                num[k] = false;
            }
        }
    }
}
void store()
{
    for (int i = 2; i < N; i++)
        if (num[i])
            primes[total++] = i;
}
void prime_factorize(int n) // O(log n)
{
    ndiv = 0;
    for (int i = 0, j = sqrt(n); primes[i] <= j; i++)
    {
        if (n % primes[i] == 0)
        {
            while (n % primes[i] == 0)
            {
                n /= primes[i];
                divisors[ndiv++] = primes[i];
            }
            j = sqrt(n);
        }
    }
    if (n > 1) // n is prime
        divisors[ndiv++] = n;
}
int get_divisors_count(int n)
{
    int total_divisors = 1;
    map<int, int> freqMap;
    prime_factorize(n);
    for (int i = 0; i < ndiv; i++)
        freqMap[divisors[i]]++;
    for (auto &pair : freqMap)
        total_divisors *= (pair.second + 1);
    return total_divisors;
}

/*  --------------------SOLUTION PROGRAM-------------------------*/
void solve()
{
    /* Lets GO */
    int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;
    vector<int> possibleA3 = {a1 + a2, a4 - a2, a5 - a4};
    int maxFib = 0;

    for (int a3 : possibleA3)
    {
        int fibCount = 0;

        if (a3 == a1 + a2)
        {
            fibCount++;
        }
        if (a4 == a2 + a3)
        {
            fibCount++;
        }
        if (a5 == a3 + a4)
        {
            fibCount++;
        }

        maxFib = max(maxFib, fibCount);
    }
    cout << maxFib;
}

int main()
{
    BISMILLAH

    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        // cout << "Case #" << tc++ << ": ";
        solve();
        cout << "\n";
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/