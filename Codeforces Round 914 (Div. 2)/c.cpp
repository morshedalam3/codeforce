#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Perform k operations
        while (k-- && n > 1) {
            // Find the maximum element and its index in the array
            auto max_it = max_element(a.begin(), a.end());
            int max_index = distance(a.begin(), max_it);

            // Append the absolute difference to the end of the array
            a.push_back(*max_it);

            // Update the maximum element to its absolute difference
            *max_it = abs(a[max_index] - a.back());

            // Remove the original maximum element
            a.erase(a.begin() + max_index);
        }

        // Find and print the minimum value in the modified array
        cout << *min_element(a.begin(), a.end()) << endl;
    }

    return 0;
}
