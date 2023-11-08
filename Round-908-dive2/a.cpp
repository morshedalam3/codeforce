#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int a_wins = 0, b_wins = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                a_wins++;
            } else {
                b_wins++;
            }
        }

        if (a_wins > b_wins) {
            cout << "A" << endl;
        } else if (b_wins > a_wins) {
            cout << "B" << endl;
        } else {
            cout << "?" << endl;
        }
    }

    return 0;
}

