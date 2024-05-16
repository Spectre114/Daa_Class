#include <bits/stdc++.h>
using namespace std;
void Djikstras(vector<pair<int, int>> Graph[], vector<int> &vis, vector<int> &dist, int start)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});
    dist[start] = 0;
    vis[start] = 1;
    while (!pq.empty())
    {
        int curDist = pq.top().first;
        int curNode = pq.top().second;
        pq.pop();
        for (auto adj : Graph[curNode])
        {
            if (!vis[adj.first] && curDist + adj.second < dist[adj.first])
            {
                dist[adj.first] = curDist + adj.second;
                pq.push({dist[adj.first], adj.first});
                vis[adj.first] = 1;
            }
        }
    }
}
int main()
{
    int vertices, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertices >> edges;
    vector<pair<int, int>> Graph[vertices];
    for (int i = 0; i < edges; i++)
    {
        int node, adj, weight;
        cin >> node >> adj >> weight;
        Graph[node].push_back({adj, weight});
        Graph[adj].push_back({node, weight});
    }
    vector<int> vis(vertices, 0);
    vector<int> dist(vertices, 1e9);
    int start;
    cout << "Enter the node to start from: ";
    cin >> start;
    Djikstras(Graph, vis, dist, start);
    for (auto it : dist)
        cout << it << " ";
}