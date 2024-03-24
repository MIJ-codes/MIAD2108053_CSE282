// Write a C++ program to Represent the following graphs using an adjacency List

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int u, v, nodes, edges;

    cout << "Number of nodes = ";
    cin >> nodes;
    cout << "Number of edges = ";
    cin >> edges;

    vector <int> adjacency_list[nodes];

    cout << "Enter connections = " << endl;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        adjacency_list[u] . push_back(v);
        adjacency_list[v]. push_back(u);
    }

    cout << endl << "Adjacency list = " << endl;
    for (int i = 0; i < nodes; i++)
    {
        cout << i << " --> ";
        for (auto it : adjacency_list[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}