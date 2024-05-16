#include <bits/stdc++.h>
using namespace std;

int findparent(int node, vector<int> &parent)
{
    if (parent[node] == node)
        return node;
    return parent[node] = findparent(parent[node], parent);
}

void unionFind(int u, int v, vector<int> &parent)
{
    int pu = findparent(u, parent);
    int pv = findparent(v, parent);
    parent[pu] = pv;
}

int kruskal(vector<pair<int, pair<int, int>>> &edges, int v, vector<int> &parent)
{
    int mst = 0;
    sort(edges.begin(), edges.end()); // Sorting edges by weight
    for (auto edge : edges)
    {
        int weight = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if (findparent(u, parent) != findparent(v, parent))
        {
            mst += weight;
            unionFind(u, v, parent);
        }
    }
    return mst;
}

int main()
{
    int v, e;
    cout << "Enter number of vertices and edges: ";
    cin >> v >> e;
    vector<pair<int, pair<int, int>>> edges;
    for (int i = 0; i < e; i++)
    {
        int node, adj, weight;
        cout << "Enter node, adj, and weight: ";
        cin >> node >> adj >> weight;
        edges.push_back({weight, {node, adj}});
    }
    vector<int> parent(v);
    for (int i = 0; i < v; i++)
    {
        parent[i] = i;
    }
    int mst = kruskal(edges, v, parent);
    cout << "Minimum Spanning Tree weight: " << mst << endl;
    return 0
}