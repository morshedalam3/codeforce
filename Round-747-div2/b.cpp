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
 // PRIME NUMBER TEST//
bool prime(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}
 
// Graph Grid //
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
ll power(ll base,ll n)
{
	ll result=1;
	while(n)
	{
		if(n%2==1)
		{
			result=(result*base)%MOD;
			n--;
		}
		else {
			base=(base*base)%MOD;
			n/=2;
		}
	}
	return result%MOD;
}
void doit(){
     ll n,k;
        cin>>n>>k;
        string v;
        while(k)
        {
            if(k%2==0)v+='0';
            else v+='1';
            k/=2;
        }
        ll ans=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]=='1')ans+=power(n,i);
            ans%=MOD;
        }
        cout<<ans<<endl;
}
 
#undef int
int main(){
 
    int t;cin>>t;
    while(t--){
        doit();
    }
 
}