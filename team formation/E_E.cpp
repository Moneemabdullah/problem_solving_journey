#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

void solve()
{
    int N;
    cin >> N;
    vector<long long> A(N);

    // Read input
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    long long S = 0;
    long long S_squared = 0;

    for (int i = 0; i < N; ++i)
    {
        S = (S + A[i]) % MOD;
        S_squared = (S_squared + A[i] * A[i] % MOD) % MOD;
    }

    // Calculate the result
    long long result = (S * S % MOD - S_squared + MOD) % MOD;
    result = result * pow(2, MOD - 2) % MOD;

    cout << result << endl;
}

int main()
{
    solve();
    return 0;
}
