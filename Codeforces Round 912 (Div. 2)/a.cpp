#include<bits/stdc++.h>
using namespace std;


bool canSort(vector<int>& boxes, int n, int k) {
    bool ok = true;
    for (int i = 0; i < n-1; i += k) {
        if ( k == 1 &&boxes[i]>boxes[i+1])
        {
            ok=false;
        }
        
    }

    return ok;
}

int main(){
    int t;cin>>t;
    while (t--)
    {
        int n,k;cin>>n>>k;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if (is_sorted(a.begin(), a.end()) || k ==n) {
        cout << "YES" << endl;
        
    }   
    else {
         if (canSort(a, n, k)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }  
    }
      
    return 0;
}