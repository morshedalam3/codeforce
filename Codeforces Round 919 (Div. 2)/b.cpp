#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, k, x;
        std::cin >> n >> k >> x;

        std::vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }

        // Sort the array in ascending order
        std::sort(a.begin(), a.end());

        // Step 1: Alice removes at most k elements
        for (int i = 0; i < k; ++i) {
            if (a[i] < 0) {
                // If the element is negative, make it positive
                a[i] *= -1;
            } else {
                // If the element is non-negative, make it negative
                a[i] *= -1;
                // If x is odd, Bob needs to change the sign of one more element
                if (x % 2 != 0) {
                    break;
                }
            }
        }

        // Calculate the sum of elements in the array after both players' moves
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += a[i];
        }

        std::cout << sum << std::endl;
    }

    return 0;
}
