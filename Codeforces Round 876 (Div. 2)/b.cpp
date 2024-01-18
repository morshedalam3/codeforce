// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;

//         cin >> n;

//         vector<pair<int, int>> vp;

//         for (int i = 0; i < n; ++i)
//         {
//             int x, y;
//             cin >> x >> y;

//             vp.push_back({x, y});
//         }

//         sort(vp.begin(), vp.end(), [&](const pair<int, int> &a, const pair<int, int> &b)
//              {
//             if(a.first != b.first)
//                 return a.first < b.first;
//             return a.second > b.second; });

//         ll prev = vp[0].first;

//         ll cnt = 0, ans = 0;
//         ;

//         for (int i = 0; i < n; ++i)
//         {
//             ll curr = vp[i].first;

//             if (curr == prev)
//             {
//                 if (cnt < curr)
//                 {
//                     ans += vp[i].second;
//                     ++cnt;
//                 }
//             }
//             else if (curr == prev and cnt >= curr)
//                 ++cnt;
//             else if (curr != prev)
//             {
//                 cnt = 1;
//                 prev = curr;
//                 ans += vp[i].second;
//             }
//         }

//         cout << ans << endl;
//     }
//     return 0;
// }

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

        vector<pair<int, int>> points;
        for (int i = 0; i < n; ++i)
        {
            int x, y;
            cin >> x >> y;
            points.push_back({x, y});
        }

        sort(points.begin(), points.end(), [&](const pair<int, int> &a, const pair<int, int> &b)
             {
                 if (a.first != b.first)
                     return a.first < b.first;
                 return a.second > b.second;
             });

        ll prevX = points[0].first;
        ll countX = 0, totalSum = 0;

        for (int i = 0; i < n; ++i)
        {
            ll currentX = points[i].first;

            if (currentX == prevX)
            {
                if (countX < currentX)
                {
                    totalSum += points[i].second;
                    ++countX;
                }
            }
            else if (currentX != prevX)
            {
                countX = 1;
                prevX = currentX;
                totalSum += points[i].second;
            }
        }

        cout << totalSum << endl;
    }
    return 0;
}
