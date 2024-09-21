// #include <iostream>
// #include <vector>

// int main() {
//     int t;
//     std::cin >> t;

//     while (t--) {
//         int n, q;
//         std::cin >> n >> q;

//         std::vector<long long> a(n);
//         for (int i = 0; i < n; ++i) {
//             std::cin >> a[i];
//         }

//         for (int i = 0; i < q; ++i) {
//             int s, d, k;
//             std::cin >> s >> d >> k;

//             long long sum = 0;
//             for (int j = 0; j < k; ++j) {
//                 sum += a[s - 1 + d * j] * (j + 1);
//             }

//             std::cout << sum << " ";
//         }

//         std::cout << std::endl;
//     }

//     return 0;
// }
#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, q;
        std::cin >> n >> q;

        std::vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }

        for (int i = 0; i < q; ++i) {
            int s, d, k;
            std::cin >> s >> d >> k;

            // Calculate the sum using arithmetic progression formula
            long long firstTerm = a[s - 1];
            long long commonDifference = d;
            long long lastTerm = a[s - 1 + (k - 1) * d];

            long long sum = k * (2 * firstTerm + (k - 1) * commonDifference) / 2 +
                            (k - 1) * k / 2 * commonDifference;

            std::cout << sum << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
