#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i]; 
        }

        vector<int> ans(n, 0);
        for (int i = n - 1; i >= 0; --i) {
            int new_score = a[i];
            int additional_removals = 0;
            for (int j = i + 1; j < n; ++j) {
                if (a[j] <= new_score) {
                    new_score += a[j];
                    ++additional_removals;
                }
            }

            ans[i] = additional_removals;
        }

        for (int i = 0; i < n; ++i) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
