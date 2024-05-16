#include <bits/stdc++.h>
using namespace std;
void Djikstras(vector<pair<int, int>> Graph[], vector<int> &dist, int start)
{
    dist[start] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // to sort priority queue in increasing order
    pq.push({0, start});                                                                // dist,node
    while (!pq.empty())
    {
        int weight = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        for (auto adj : Graph[node])
        {
            if (dist[adj.first] > weight + adj.second)
            {
                dist[adj.first] = weight + adj.second;
                pq.push({dist[adj.first], adj.first});
            }
        }
    }
}
int main()
{
    int vertices, edges;
    cout << "enter vertices and edges: ";
    cin >> vertices >> edges;
    vector<pair<int, int>> Graph[vertices];
    for (int i = 0; i < edges; i++)
    {
        int node, adj, weight;
        cout << "Enter node and adj and edge weight: ";
        cin >> node >> adj >> weight;
        Graph[node].push_back({adj, weight});
        Graph[adj].push_back({node, weight});
    }
    vector<int> dist(vertices, 1e9); // 1e9 = 10^9
    int start;
    cout << "Enter a node to start: ";
    cin >> start;
    Djikstras(Graph, dist, start);
    for (auto d : dist)
    {
        cout << d << " ";
    }
}