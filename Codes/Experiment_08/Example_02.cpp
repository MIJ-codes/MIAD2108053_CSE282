//Finding the shortest path from a source to the destination node

#include<bits/stdc++.h>

using namespace std;

vector <int> adjacency_list[1000];
vector <int> path;
int parent[1000], distances[1000], visited[1000];

void shortest_path (int destination)
{
    if (destination != -1)
    {
        int p = parent[destination];
        path . push_back (destination);
        shortest_path (p);
    }
}

void BFS (int source)
{
    queue <int> q;
    distances[source] = 0;
    visited[source] = 1;
    parent[source] = -1;

    q . push (source);

    while (!q . empty())
    {
        int node = q . front();
        q . pop();

        for (auto it : adjacency_list[node])
        {
            int next_node = it;

            if (visited[next_node])
            {
                continue;
            }

            distances[next_node] = 1 + distances[node];
            visited[next_node] = 1;
            parent[next_node] = node;
            q . push (next_node);
        }
    }

}

int main()
{
    int nodes, edges, source, destination;

    cout << "Number of nodes = ";
    cin >> nodes;
    cout << "Number of edges = ";
    cin >> edges;

    cout << "Enter the edge connections:" << endl;
    for (int i = 0; i < edges; i++)
    {
        int u, v;

        cin >> u >> v;

        adjacency_list[u] . push_back (v);
        adjacency_list[v] . push_back (u);
    }

    cout << "Enter source node = ";
    cin >> source;
    cout << "Enter destination node = ";
    cin >> destination;

    BFS (source);
    cout << "Shortest distance from " << source << " to " << destination << " = " << distances[destination] << endl;

    cout << "Shortest path is: ";
    shortest_path (destination);
    reverse (path . begin() , path . end());
    for (auto it : path)
    {
        cout << it << " ";
    }
}