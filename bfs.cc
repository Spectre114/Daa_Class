#include <bits/stdc++.h>
using namespace std;
void BFS(vector<int> Graph[], vector<int> &vis, vector<int> &bfs, int start)
{
    queue<int> q;
    q.push(start);
    bfs.push_back(start);
    vis[start] = 1;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto adj : Graph[node])
        {
            if (!vis[adj])
            {
                bfs.push_back(adj);
                q.push(adj);
                vis[adj] = 1;
            }
        }
    }
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
        Graph[adj].push_back(node);
    }
    vector<int> bfs;
    vector<int> vis(vertices, 0);
    for (int i = 0; i < vertices; i++)
    {
        if (!vis[i])
            BFS(Graph, vis, bfs, i);
    }
    for (auto it : bfs)
        cout << it << " ";
}