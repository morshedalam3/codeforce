#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int ps = 0,ng=0,z=0;
        for (int i = 0; i < n; i++)
        {
            if (v[i]==0)
            {
                z++;
            }else if (v[i]>0)
            {
                ps++;
            }else
            {
                ng++;
            }
         }
      if (z!=0)
      {
        cout<<0<<endl;
        continue;
      }
      if (ng%2!= 0)
      {
        cout<<0<<endl;
        continue;
      }
      
    }
    return 0;
}