#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int>> rookMoves(int row, int col) {
    vector<pair<int, int>> moves;

    for (int i = 1; i <= 8; ++i) {
        if (i != row) {
            moves.push_back(make_pair(i, col));
        }
    }

    for (int j = 1; j <= 8; ++j) {
        if (j != col) {
            moves.push_back(make_pair(row, j));
        }
    }

    return moves;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        char column;
        int row;
        cin >> column >> row;
        int rookCol = column - 'a' + 1;
        vector<pair<int, int>> possibleMoves = rookMoves(row, rookCol);

        for (const auto& move : possibleMoves) {
            char moveColumn = move.second - 1 + 'a';
            cout << moveColumn << move.first <<endl;
        }
    }

    return 0;
}
