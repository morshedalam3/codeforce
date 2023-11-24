#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int initialBeauty = 0;

        for (int i = 0; i < n; i++) {
            initialBeauty += abs(a[i] - b[i]);
        }

       long long int maxBeauty = initialBeauty;
       long long int maxDiff = 0;
        pair<int, int> maxDiffIndices;

        for (int i = 0; i < n; i++) {
            int diff = abs(a[i] - b[i]);
            
            if (diff > maxDiff) {
                maxDiff = diff;
                maxDiffIndices = {i, i};
            }
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int newBeauty = initialBeauty - abs(a[i] - b[i]) - abs(a[j] - b[j])
                                 + abs(a[i] - b[j]) + abs(a[j] - b[i]);

                if (newBeauty > maxBeauty) {
                    maxBeauty = newBeauty;
                    maxDiffIndices = {i, j};
                }
            }
        }

        swap(b[maxDiffIndices.first], b[maxDiffIndices.second]);
        cout << maxBeauty << endl;
    }

    return 0;
}
