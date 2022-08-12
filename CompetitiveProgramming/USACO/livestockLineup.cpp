//Credit: Jan
#include <bits/stdc++.h>

using namespace std;

ifstream fin("lineup.in");
ofstream fout("lineup.out");

void dfs(vector<vector<int>> &adj, int vertex, vector<bool> &visited)
{
    int numChildren = 0;
    for (int children : adj[vertex])
    {
        if (!visited[children])
            numChildren++;
    }
    if (numChildren < 2)
    {
        visited[vertex] = true;
        map<int, string> map;
        map[0] = "Beatrice";
        map[1] = "Belinda";
        map[2] = "Bella";
        map[3] = "Bessie";
        map[4] = "Betsy";
        map[5] = "Blue";
        map[6] = "Buttercup";
        map[7] = "Sue";
        fout << map[vertex] << '\n';
        for (int children : adj[vertex])
        {
            if (!visited[children])
                dfs(adj, children, visited);
        }
    }
}

int main()
{
    map<string, int> map;
    vector<vector<int>> adj(8);
    map["Beatrice"] = 0;
    map["Belinda"] = 1;
    map["Bella"] = 2;
    map["Bessie"] = 3;
    map["Betsy"] = 4;
    map["Blue"] = 5;
    map["Buttercup"] = 6;
    map["Sue"] = 7;
    int n;
    fin >> n;
    string cow1, cow2, nothing;
    for (int i = 0; i < n; i++)
    {
        fin >> cow1 >> nothing >> nothing >> nothing >> nothing >> cow2;
        adj[map[cow1]].push_back(map[cow2]);
        adj[map[cow2]].push_back(map[cow1]);
    }
    vector<bool> visited(8);
    for (int i = 0; i < 8; i++)
    {
        if (!visited[i])
            dfs(adj, i, visited);
    }
}