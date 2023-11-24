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
    int n,x;
    cin>>n>>x;
     vector<int> stations(n+1);
     stations[0]=0;
    for (int i = 1; i < n+1; ++i) {
        cin >> stations[i];
    }

     int minTankVolume = 0;
     bool ok = false;

    for (int i = 0; i < n; ++i) {
        int distance = stations[i+1] - stations[i];
        minTankVolume = max(minTankVolume, distance);
        ok=true;
    }
    if (ok)
    {
    int lastSegment = ((x - stations[n]) * 2);
    minTankVolume = max(minTankVolume, lastSegment);
    }
    cout << minTankVolume << endl;
}
#undef int
int main(){
 
    int t;cin>>t;
    while(t--){
        doit();
    }
 
}