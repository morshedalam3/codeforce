#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool possible = true;
        int m = 0;

        while ((1 << m) <= n) {
            m++;
        }
        m--;

        for (int i = 1; i <=min(n, (1 << m)); i++) {
            a[i - 1]--;  // Subtract 1 from each element at positions 1 to 2^m
        }
        for (int i = 0; i < n; i++) {
            if (a[i] < i) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
