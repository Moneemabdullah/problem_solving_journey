#include <iostream>
#include <vector>
#include <unordered_map>
#define MOD 1000000007
using namespace std;

// Compute factorial modulo MOD
long long factorial_mod(int m) {
    long long fact = 1;
    for (int i = 1; i <= m; ++i) {
        fact = (fact * i) % MOD;
    }
    return fact;
}

// Sieve of Eratosthenes to find primes up to limit
vector<int> sieve(int limit) {
    vector<int> primes;
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= limit; ++i) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}

// Factorize a number using precomputed primes
unordered_map<int, int> prime_factor_count(long long x, const vector<int>& primes) {
    unordered_map<int, int> factors;
    for (int prime : primes) {
        if (prime * prime > x) break;
        while (x % prime == 0) {
            factors[prime]++;
            x /= prime;
        }
    }
    if (x > 1) factors[x] = 1;
    return factors;
}

// Compute the number of divisors modulo MOD
long long divisor_count(long long x, const vector<int>& primes) {
    auto factors = prime_factor_count(x, primes);
    long long count = 1;
    for (const auto& factor : factors) {
        count = count * (factor.second + 1) % MOD;
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Precompute factorial of M modulo MOD
    long long M_fact = factorial_mod(M);

    // Precompute primes up to 10^5
    vector<int> primes = sieve(100000);

    // Process each element in the array
    vector<long long> result(N);
    for (int i = 0; i < N; ++i) {
        long long B_i = (A[i] * M_fact) % MOD;
        result[i] = divisor_count(B_i, primes);
    }

    // Output results
    for (int i = 0; i < N; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
