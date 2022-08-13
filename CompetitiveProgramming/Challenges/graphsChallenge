#include <bits/stdc++.h>

using namespace std;
void dfs(vector<vector<int>>& adj,int vertex, vector<bool>& visited){
    visited[vertex] = true;
    cout << vertex << " ";
    for(int children : adj[vertex]){
        if(!visited[children]) dfs(adj,children,visited);
    }
}
int main(){
    vector<vector<int>> adj(8,vector<int>(8));
    vector<int> c1;
    vector<int> c2;
    vector<pair<int,int>> pv;
    pv.push_back({0,1});
    pv.push_back({1,3});
    pv.push_back({1,5});
    pv.push_back({3,5});
    pv.push_back({3,6});
    pv.push_back({6,4});
    pv.push_back({3,4});
    pv.push_back({3,2});
    pv.push_back({2,4});
    pv.push_back({4,7});
    for(int i = 0; i < 10; i++){
        adj[pv[i].first].push_back(pv[i].second);
        adj[pv[i].second].push_back(pv[i].first);
    }
    vector<bool> visited(8);
    for(int i = 0; i < 8; i++){
        if(!visited[i]) dfs(adj,i,visited);
    }
}