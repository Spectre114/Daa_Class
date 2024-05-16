#include <bits/stdc++.h>
using namespace std;
int prims(vector<pair<int, int>> Graph[], vector<int> &vis)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, 0}); // weight,node
    int mst = 0;
    while (!pq.empty())
    {
        int weight = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        if (vis[node])
            continue;
        vis[node] = 1;
        mst += weight;
        for (auto adj : Graph[node])
        {
            int n = adj.first;
            int edgeweight = adj.second;
            if (!vis[n])
            {
                pq.push({edgeweight, n});
            }
        }
    }
    return mst;
}
int main()
{
    int v, e;
    cout << "Enter number of vertices and edges: ";
    cin >> v >> e;
    vector<pair<int, int>> Graph[v];
    for (int i = 0; i < e; i++)
    {
        int node, adj, weight;
        cout << "Enter node, adjacent and edgeweight: ";
        cin >> node >> adj >> weight;
        Graph[node].push_back({adj, weight});
        Graph[adj].push_back({node, weight});
    }
    vector<int> vis(v, 0);
    int mst = prims(Graph, vis);
    cout << mst;
}