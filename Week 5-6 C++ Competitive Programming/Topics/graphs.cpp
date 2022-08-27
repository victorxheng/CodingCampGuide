#include <iostream>
#include <vector>

using namespace std;

void dfs(vector<vector<int>>& adj, int vertex, vector<bool>& visited) {
    visited[vertex] = true;
    cout << vertex << '\n';
    for (int children : adj[vertex]) {
        if (!visited[children]) dfs(adj, children, visited);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    // graphs are represented as adjacency lists
    vector<vector<int>> adj(n);

    // read in the graph as pairs of vertices
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(n);
    for (int i = 0; i < n; i++) {
        if(!visited[i]) dfs(adj, i, visited);
    }
}

