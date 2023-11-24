/****************Bis'Millah Hir Rah'Manir Rahim ***************
*                    Author: Morshed Alam                     *
*                       SyntaxSorcerer                        *
***************************************************************
problem link: 
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
//#define M_PI (2*acos(0))
#define MAX_N 10001
#define MOD 1000000007
#define apo(a,b) sqrtl( powl(a.x-b.x,2) + powl(a.y-b.y,2) )
#define ldeq(a,b) ( fabsl(a - b) < 0.00000000007 )
#define rep(a,b) for(int i=a; i<=b; i++)
#define repv(a,b,i) for(int i=a; i<=b; i++)
#define mmod(a,b) ( (a >= 0) ? ((a%b)%b) : ( ( ( a + ( ((abs(a)+b)/b) * b ) ) % b ) % b ) )
#define int ll
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
#define PB push_back
using namespace std;
int occ[26];
 
void doit(){
    int n;cin>>n;
    vector<string>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end(),[&](string x,string y){return x.size()<y.size();});
    bool ok = true;
    for(int i = 0;i<n-1;i++){
        string s = a[i+1];
        // int pos = s.find(a[i]);
        if(s.find(a[i]) == string::npos){
            ok =  false;
            break;
        }
    }
    if(ok){
        cout<<"YES"<<endl;
        for(auto val:a){
           cout<<val<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }

}
 
#undef int
int main(){
 
    // int t = 1;
    // while(t--){
        doit();
    // }
 
}