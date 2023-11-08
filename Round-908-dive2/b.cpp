#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<int, vector<int>> m;

        for (int i = 0; i < n; i++) {
           m[a[i]].push_back(i);
        }

        vector<int> b(n);
        int flag = 0;
        for (auto && i : m)
        {
           if (i.second.size() >=2)
           {
            if (flag ==0)
            {
                b[i.second[0]] = 1;
                for (int k = 1; k < i.second.size(); k++) b[i.second[k]] = 3;
            }
            else{
                b[i.second[0]] = 1;
                for (int k = 1; k < i.second.size(); k++) b[i.second[k]] = 2; 
            }
            flag++;
           }else{
             b[i.second[0]] = i.first;
           }
           
        }
        if (flag<2)
        {
            cout<<-1<<endl;
        }else{
             for (auto && j : b){
                cout<<j<<" ";
             }
             cout<<endl;
        }
        

       

    }

    return 0;
}
