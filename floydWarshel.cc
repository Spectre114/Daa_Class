#include <bits/stdc++.h>
using namespace std;
void floydWarshel(vector<vector<int>> &dist)
{
    int v = dist.size();
    for (int k = 0; k < v; k++)
    {
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < v; j++)
            {
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
}
int main()
{
    int vertices;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    vector<vector<int>> Graph(vertices, vector<int>(vertices));
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            cin >> Graph[i][j];
        }
    }
    vector<vector<int>> dist(vertices, vector<int>(vertices));
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            if (Graph[i][j] == -1)
                dist[i][j] = 1e9;
            else
                dist[i][j] = Graph[i][j];
            if (i == j)
                dist[i][j] = 0;
        }
    }
    floydWarshel(dist);
    for (int i = 0; i < vertices; i++)
    {
        for (int j = 0; j < vertices; j++)
        {
            cout << dist[i][j];
        }
    }
}