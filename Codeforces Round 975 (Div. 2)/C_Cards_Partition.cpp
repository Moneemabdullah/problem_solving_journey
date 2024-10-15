#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

// Function to check if we can form decks of size d
bool canFormDecks(const vector<ll> &a, ll n, ll k, ll d)
{
    ll total_needed = 0;
    ll count_of_types = 0;

    for (ll cards : a)
    {
        if (cards > 0)
        {
            count_of_types++;
        }
    }

    // Calculate the number of decks we can make with distinct types
    ll m = min(count_of_types, d);

    // For each type, we can only use one card, so we need to check how many extra we need
    for (ll cards : a)
    {
        if (cards > 0)
        {
            total_needed += max(0LL, d - 1); // Each type needs to fill the deck except for the one we have
        }
    }

    // Calculate how many extra cards are needed
    total_needed -= count_of_types; // since we have one card of each type already
    return total_needed <= k;       // Check if we can buy the remaining cards
}

// Function to find the maximum deck size
ll maxDeckSize(ll n, ll k, const vector<ll> &a)
{
    ll left = 1, right = n + k, ans = 0;

    while (left <= right)
    {
        ll mid = left + (right - left) / 2;

        if (canFormDecks(a, n, k, mid))
        {
            ans = mid;      // If we can form decks of size mid, update ans
            left = mid + 1; // Try for a larger deck size
        }
        else
        {
            right = mid - 1; // Try smaller deck sizes
        }
    }

    return ans;
}

// Main function to read input and solve the problem
void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (ll i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        cout << maxDeckSize(n, k, a) << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
