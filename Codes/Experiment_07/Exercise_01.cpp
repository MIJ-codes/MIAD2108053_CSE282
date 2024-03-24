//Write a C++ program to Represent the following graphs using an adjacency matrix

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main ()
{
    int u, v, nodes, edges;

    cout << "Number of nodes = ";
    cin >> nodes;

    vector <vector <int>> adjacency_matrix;
    adjacency_matrix . resize (nodes + 1, vector <int> (nodes + 1, 0));        //myVector.resize(size, 0(value));    to initialize an existing vector with all the values as 0;

    cout << "Number of edges = ";
    cin >> edges;

    cout << "Put the connections :" << endl;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        adjacency_matrix[u][v] = 1;
        adjacency_matrix[v][u] = 1;
    }

    cout << endl << "Adjacency matrix = " << endl;
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            cout << adjacency_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}