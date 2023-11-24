// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
        
//     }
//     return 0;
// }
/****************Bis'Millah Hir Rah'Manir Rahim ***************
*                    Author: Morshed Alam                     *
*                       SyntaxSorcerer                        *
***************************************************************
problem link: https://codeforces.com/contest/1899/problem/B
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
    int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> divisor;
        for (ll i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisor.push_back(i);
                if (i * i != n) {
                    divisor.push_back(n / i);
                }
            }
        }
        ll ans = 0;
        for (auto segme : divisor) {
            ll mx = 0, mn = LLONG_MAX;
            int cnt = 0;
            ll sum = 0;
            for (ll i = 0; i < n; i++) {
                sum += a[i];
                cnt++;
                if (cnt == segme) {
                    mx = max(mx, sum);
                    mn = min(mn, sum);
                    cnt = 0;
                    sum = 0;
                }
            }
            ans = max(ans, mx - mn);
        }
        cout << ans << endl;
}
 
#undef int
int main(){
 
    int t;cin>>t;
    while(t--){
        doit();
    }
 
}