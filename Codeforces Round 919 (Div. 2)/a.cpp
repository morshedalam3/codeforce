#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        ll constraints[n][2];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> constraints[i][j];
            }
        }

        ll lower_limit = 0, upper_limit = INT_MAX;

        map<ll, ll> value_occurrences;

        for (int i = 0; i < n; i++)
        {
            if (constraints[i][0] == 1)
            {
                lower_limit = max(lower_limit, constraints[i][1]);
            }
            else if (constraints[i][0] == 2)
            {
                upper_limit = min(upper_limit, constraints[i][1]);
            }
            else
            {
                value_occurrences[constraints[i][1]]++;
            }
        }

        ll count_within_range = 0;
        for (auto i : value_occurrences)
        {
            if (i.first >= lower_limit && i.first <= upper_limit)
            {
                count_within_range++;
            }
        }

        ll result = upper_limit - lower_limit + 1 - count_within_range;

        if (upper_limit < lower_limit || result < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << result << endl;
        }
    }

    return 0;
}
