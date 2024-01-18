#include <iostream>
#include <cmath>

using namespace std;

bool canKnightAttack(int xK, int yK, int xQ, int yQ, int a, int b) {
    // Check if the king and queen are at a distance corresponding to a valid knight move
    return (abs(xK - xQ) % a == 0 && abs(yK - yQ) % b == 0) || (abs(xK - xQ) % b == 0 && abs(yK - yQ) % a == 0);
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int xK, yK, xQ, yQ, a, b;
        cin >> xK >> yK >> xQ >> yQ >> a >> b;

        // Check if the knight can attack both the king and queen directly
        if (canKnightAttack(xK, yK, xQ, yQ, a, b)) {
            cout << 2 << endl;
        } else {
            // Check if the king and queen are at positions corresponding to a valid knight move
            if ((abs(xK - xQ) % a == 0 && abs(yK - yQ) % b == 0) || (abs(xK - xQ) % b == 0 && abs(yK - yQ) % a == 0)) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}
