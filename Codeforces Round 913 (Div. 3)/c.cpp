#include<bits/stdc++.h>
using namespace std;
#define ll long long 
// != () &&
int main(){
      int t;cin>>t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> frequency(26, 0);

        for (char c : s) {
            frequency[c - 'a']++;
        }

        int result = 0;
        for (int i = 0; i < 26; ++i) {
            result += (frequency[i] % 2 == 1);
        }

        cout << result / 2 <<endl;
    }
    return 0;
}