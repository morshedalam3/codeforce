#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<ll> left(n, 0), right(n, 0);
        vector<int> mp(n, 0);
        mp[0] = 1;
        mp[n - 1] = -1;

        for (int i = 1; i < n - 1; i++)
        {
            ll leftDist = abs(a[i] - a[i - 1]);
            ll rightDist = abs(a[i] - a[i + 1]);
            leftDist < rightDist ? mp[i] = -1 : mp[i] = 1;
        }
        left[0] = 0;
        for (int i = 1; i < n; i++)
        {
            mp[i] == -1 ? left[i] = 1 + left[i - 1] : left[i] = left[i - 1] + abs(a[i] - a[i - 1]);
        }

        right[n - 1] = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            mp[i] == 1 ? right[i] = 1 + right[i + 1] : right[i] = right[i + 1] + abs(a[i] - a[i + 1]);
        }

        ll q;
        cin >> q;
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            cout << (x == y ? 0 : (y > x ? right[x - 1] - right[y - 1] : left[x - 1] - left[y - 1])) << endl;
        }
    }

    return 0;
}