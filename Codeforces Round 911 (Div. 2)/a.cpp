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
    string st;cin>>st;
    int result  =0;
    int consecutiveDots = 0;
    int operation = 0;
    for (int i = 0; i < st.length(); i++)
    {
       if (st[i] == '.' && operation == 1)
       {
        consecutiveDots++;
        result++;
       }
       if (consecutiveDots>=3)
       {
        result=2;
        break;
       }
       
       if (st[i] == '.' && operation == 0)
       {
        operation=1;
        consecutiveDots++;
        result++;
       }
       if (operation == 1 && st[i] == '#')
       {
        operation=0;
        consecutiveDots=0;
       }
    }
    cout<<result<<endl;
}
 
#undef int
int main(){
 
    int t;cin>>t;
    while(t--){
        doit();
    }
 
}