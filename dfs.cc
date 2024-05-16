#include <bits/stdc++.h>
using namespace std;
void DFS(vector<int> Graph[], vector<int> &vis, stack<int> &dfs, int node)
{
    vis[node] = 1;
    for (auto adj : Graph[node])
    {
        if (!vis[adj])
            DFS(Graph, vis, dfs, adj);
    }
    dfs.push(node);
}
int main()
{
    int vertices, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertices >> edges;
    vector<int> Graph[vertices];
    for (int i = 0; i < edges; i++)
    {
        int node, adj;
        cin >> node >> adj;
        Graph[node].push_back(adj);
        // Graph[adj].push_back(node);
    }
    stack<int> dfs;
    vector<int> vis(vertices, 0);
    for (int i = 0; i < vertices; i++)
    {
        if (!vis[i])
            DFS(Graph, vis, dfs, i);
    }
    vector<int> topo;
    while(!dfs.empty()){
        topo.push_back(dfs.top());
        dfs.pop();
    }
    for(auto it:topo){
        cout<<it<<" ";
    }
}