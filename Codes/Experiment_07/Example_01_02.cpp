#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> graph[5];
    int nodes, edges, u, v;

    cout << "Enter the number of nodes = ";
    cin >> nodes;
    cout << "Enter the number of edges = ";
    cin >> edges;

    cout << "Put the connections = " << endl;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cout << "Adjacency list of the graph = " << endl;

    for (int j = 1; j <= nodes; j++)
    {
        cout << j << "-->";
        for (auto it : graph[j])
        {
            cout << it << " ";
        }
        cout << endl;
    }
}