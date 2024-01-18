#include<bits/stdc++.h>
using namespace std;

int dfs(int v, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[v] = true;
    int leafCount = 0;

    for (int u : adj[v]) {
        if (!visited[u]) {
            leafCount += dfs(u, adj, visited);
        }
    }

    if (adj[v].size() == 1) {
        leafCount++;
    }

    return leafCount;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj(n + 1);
        
        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> visited(n + 1, false);
        int leafCount = dfs(1, adj, visited);
        cout << (leafCount + 1) / 2 << endl;
    }

    return 0;
}