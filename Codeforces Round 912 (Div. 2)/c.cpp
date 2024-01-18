#include<bits/stdc++.h>
using namespace std;

long long maxCypriotValue(const vector<int>& arr) {
    int n = arr.size();
    long long maxCypriot = INT_MIN;

    for (int i = 0; i < n; i++) {
        long long sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            maxCypriot = max(maxCypriot, (j - i + 1LL) * sum);
        }
    }

    return maxCypriot;
}
int main(){
    int t;cin>>t;
    while (t--)
    {
         int n;cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = maxCypriotValue(arr);

    cout << result << endl;
    }
      
    return 0;
}