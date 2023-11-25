/****************Bis'Millah Hir Rah'Manir Rahim ***************
*                    Author: Morshed Alam                     *
*                       SyntaxSorcerer                        *
***************************************************************
problem link: 
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
           cin >> vec[i];
        }
       
        if (vec[0] != 1) {
            cout << "No"<<endl;
            continue;
        } else {
            cout << "Yes"<<endl;
        }
    }  
    return 0;
}