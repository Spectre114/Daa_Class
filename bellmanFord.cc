#include <bits/stdc++.h>
using namespace std;
void bellmanFord(vector<pair<int, int>> Graph[], vector<int> &dist, int start, int v)
{
    dist[start] = 0;
    for (int i = 0; i < v - 1; i++)
    {
        for (int j = 0; j < v; j++)
        {
            for (auto adj : Graph[j])
            {
                int adjNode = adj.first;
                int weight = adj.second;
                if (dist[j] != 1e9 && dist[adjNode] > dist[j] + weight)
                {
                    dist[adjNode] = dist[j] + weight;
                }
            }
        }
        for (auto it : dist)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}
int main()
{
    int v, e;
    cout << "Enter vertices and edges: ";
    cin >> v >> e;
    vector<pair<int, int>> Graph[v];
    for (int i = 0; i < e; i++)
    {
        int node, adj, weight;
        cout << "Enter node adj and weight: ";
        cin >> node >> adj >> weight;
        Graph[node].push_back({adj, weight});
        Graph[adj].push_back({node, weight});
    }
    vector<int> dist(v, 1e9);
    int start;
    cout << "Enter the node to start: ";
    cin >> start;
    bellmanFord(Graph, dist, start, v);
    for (auto it : dist)
    {
        cout << it << " ";
    }
}