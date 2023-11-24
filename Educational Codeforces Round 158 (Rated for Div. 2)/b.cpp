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
#define mmod(a,b) ( (a >= 0) ? ((a%b)%b) : ( ( ( a + ( ((abs(a)+b)/b) * b ) ) % b ) % b ) )
#define int ll
#define ALL(x) x.begin(),x.end()
#define S(x) ((int)(x.size()))
#define PB push_back
using namespace std;
int occ[26];
 
void doit(){
    int n;cin>>n;
    vector<ll>vec(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    if (n==1)
    {
        cout<<vec[0]-1<<endl;
        return;
    }
      vector<ll>vec2;
      vec2.PB(1);
      for (ll i = 0; i <n; i++)
      {
        if (vec[i] != vec2[vec2.size()-1])
        {
            vec2.PB(vec[i]);
        }
      }
      ll res = 0;
        for (ll i = 0; i < vec2.size()-1; i++)
        {
           if (vec2[i]<vec2[i+1])
           {
              res+=vec2[i+1]-vec2[i];
           }
           
        }
       cout<<res<<endl;
}
 
#undef int
int main(){
 
    int t;cin>>t;
    while(t--){
        doit();
    }
 
}