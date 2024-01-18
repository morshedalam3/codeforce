#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;
        cin >> n;
        string contestLog;
        cin >> contestLog;
        int totalTime = 0;
        map<char,int>mp;
        for (int i = 0; i < contestLog.size(); i++)
        {
            mp[contestLog[i]]++;
        }
        
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            int f = it->first-'A'+1;
            int s = it->second;
            if (s>=f)
            {
               totalTime++;
            }
            
        }
       
        cout<< totalTime <<endl;
    }
      
    return 0;
}

