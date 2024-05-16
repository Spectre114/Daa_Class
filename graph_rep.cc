// Reperesentation of UnDirected Graph using Adjacency list
#include <bits/stdc++.h>
using namespace std;
void pprint(vector<int> Graph[], int v)
{
    for (int i = 0; i < v; i++)
    {
        for (auto it : Graph[i])
        {
            cout << i << "->" << it << endl;
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
        cout << "Enter the node and adjacent node to connect: ";
        cin >> node >> adj;
        Graph[node].push_back(adj);
        Graph[adj].push_back(node);
    }
    pprint(Graph, vertices);
}
