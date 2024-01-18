#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        string concatenated;
        cin >> concatenated;
        bool ok = false;
        for (int i = 1; i < concatenated.length(); ++i) {
            string str_a = concatenated.substr(0, i);
            string str_b = concatenated.substr(i);

            int a = stoi(str_a);
            int b = stoi(str_b);

            if (str_a[0] != '0' && str_b[0] != '0' && b > a) {
                cout << a << " " << b << endl;
                ok = true;
                break;
                
            }
        }
        !ok && cout << "-1" << endl;
    }

    return 0;
}
