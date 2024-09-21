#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int m, n;
        cin >> m >> n;

        vector<int> a(m), b(m + n);

        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n + m; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long long d = 0;
        for (int i = 0; i < m; ++i) {
            d += abs(a[i] - b[n + i]);
        }

        cout << d << endl;
    }

    return 0;
}
