#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        string t = s;
        int n = s.size();
        int one=0,zero=0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1')
            { 
                one++;
                
            }else{
                zero++;
            }
            
        }

        if (one ==zero)
        {
            cout<<0<<endl;
            continue;
        }
        for (int i = 0; i <n; i++)
        {
            if (s[i] == '1' && zero>0)
            {
                s[i] = '0';
                zero--;
            }else if (s[i] == '0' && one>0)
            {
                s[i] = '1';
                one--;
            }
            
        }
        
        int j = 0,costCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i]!=t[j])
            {
                j++;
                continue;
            }else{
                costCount++;
            }
            
        }
        cout<<costCount<<endl;
    }

    return 0;
}

