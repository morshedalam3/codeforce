#include <iostream>
#include <vector>

using namespace std;

bool findArray(vector<vector<int>>& M, vector<int>& a) {
    int n = M.size();

    for (int i = 0; i < n; i++) {
        int candidate = M[i][i];  // Start with the diagonal element

        // Skip 0 from each row
        for (int j = 0; j < n; j++) {
            if (i != j && M[i][j] != 0) {
                candidate |= M[i][j];  // Use OR operation with non-zero elements
            }
        }

        a.push_back(candidate);
    }

    // Check if there's at least one non-zero element in each row
    for (int i = 0; i < n; i++) {
        bool hasNonZero = false;
        for (int j = 0; j < n; j++) {
            if (i != j && M[i][j] != 0) {
                hasNonZero = true;
                break;
            }
        }
        if (!hasNonZero) {
            return false; // No solution for this row
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> M(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }

        vector<int> a;

        if (findArray(M, a)) {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
