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

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin() + 1, a.end());

        vector<ll> count(n + 1, 0);
        long long ans = 0;

        for (int i = 1; i < n; i++)
        {
            count[a[i]] += i - 1;
            if (a[i] == a[i + 1])
            {
                ans += count[a[i]];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
