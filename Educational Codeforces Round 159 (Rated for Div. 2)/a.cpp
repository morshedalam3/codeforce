#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int zeros = 0, ones = 0;
        bool ok = false;
        for (int i = 0; i <s.size()-1; i++) {
            if (s[i] != s[i + 1]) {
                ok=true;
            }

            if (s[i] == '0') {
                zeros++;
            } else {
                ones++;
            }
        }
        if (ok)
        {
            cout << "Yes" << endl;
        }else{
        if (zeros > ones || zeros == ones) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
        }
        
       
    }

    return 0;
}
