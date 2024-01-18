#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         string str;
//         cin >> str;
//         string result;

//         for (char c : str) {
//             if (c == 'b') {
//                 auto it = find_if(result.rbegin(), result.rend(), ::islower);
//                 if (it != result.rend()) {
//                     result.erase(prev(it.base()));
//                 }
//             } else if (c == 'B') {
//                 auto it = find_if(result.rbegin(), result.rend(), ::isupper);
//                 if (it != result.rend()) {
//                     result.erase(prev(it.base()));
//                 }
//             } else {
//                 result.push_back(c);
//             }
//         }

//         cout << result << "\n";
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        stack<char> lowercase;
        deque<char> uppercase; 

        for (char c : str) {
            if (c == 'b') {
                if (!lowercase.empty()) {
                    lowercase.pop();
                }
            } else if (c == 'B') {
                if (!uppercase.empty()) {
                    uppercase.pop_front();
                }
            } else {
                if (islower(c)) {
                    lowercase.push(c);
                } else if (isupper(c)) {
                    uppercase.push_front(c);
                }
            }
        }

        string result;
        while (!lowercase.empty()) {
            result += lowercase.top();
            lowercase.pop();
        }

        for (char c : uppercase) {
            result += c;
        }
        reverse(result.begin(), result.end());
        cout << result << "\n";
    }

    return 0;
}






