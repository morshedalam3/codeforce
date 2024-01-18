// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         int ans = 0;
//         for (int i = 1; i <= n; i++)
//         {
//             ans = max(ans, (i + k - 1) / k + (n - i + k - 1) / k);
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int ans = INT_MIN;

        for (int i = 1; i <= n; i++)
        {
            int current = (i + k - 1) / k + (n - i + k - 1) / k;
            ans = max(ans, current);
        }

        cout << ans << endl;
    }

    return 0;
}
