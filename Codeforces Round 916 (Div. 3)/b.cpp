#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> order(n);
        for (int i = 0; i < n; ++i) {
            order[i] = i + 1;
        }
        if (k == 0) {
            reverse(order.begin(), order.end());
            for (int i = 0; i < n; ++i) {
            cout << order[i] << " ";
            }
        }
        else if (k==n-1)
        {
            for (int i = 0; i < n; ++i) {
            cout << order[i] << " ";
        }
        }
        else {
            for (int i = 0; i < k; ++i) {
                cout << order[i] << " ";
            }
            for (int i = n - 1; i >=k; --i) {
                cout << order[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}


