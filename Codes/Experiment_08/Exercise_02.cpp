//Find the shortest distance and path from an arbitrary source to an arbitrary destination node

#include<bits/stdc++.h>

using namespace std;

vector <int> adjacency_list[1000];
vector <int> path;
int visited[1000], parent[1000];

void shortest_path (int destination)
{
    if (destination != -1)
    {
        path.push_back (destination);
        shortest_path (parent[destination]);
    }
}

void path_finder (int source, int destination)
{
    queue <int> q;
    q . push (source);
    parent[source] = -1;
    visited[source] = true;

    while (! q . empty ())
    {
        int node = q . front ();
        q . pop ();

        for (auto it : adjacency_list[node])
        {
            int next_node = it;

            if (visited[next_node] == true)
            {
                continue;
            }

            parent[next_node] = node;
            visited[next_node] = true;
            q . push (next_node);
        }
    }

    shortest_path (destination);
}

int main()
{
    int nodes, edges, source, destination, distance, u, v;

    cout << "Node number = ";
    cin >> nodes;
    cout << "Edge number = ";
    cin >> edges;

    cout << "Enter connections:" << endl;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        adjacency_list[u].push_back(v);
        adjacency_list[v].push_back(u);
    }

    cout << "Source node = ";
    cin >> source;
    cout << "Destination node = ";
    cin >> destination;

    distance = 0;

    path_finder (source, destination);
    reverse (path . begin (), path . end ());

    cout << "Shortest path from " << source << " to " << destination << " = ";
    for (auto it : path)
    {
        if (it != source)
        {
            distance++;
        }
        cout << it << " ";
    }

    cout << endl << "Shortest distance from " << source << " to " << destination << " = " << distance;

    return 0;
}