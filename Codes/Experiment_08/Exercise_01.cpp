//Find the shortest distance from an arbitrary source to all the nodes

#include <bits/stdc++.h>

using namespace std;

vector <int> adjacency_list[1000];
int distances[1000], visited[1000];

void shortest_distance (int source)
{
    queue <int> q;
    q . push (source);
    distances[source] = 0;
    visited[source] = true;

    while (! q . empty())
    {
        int node = q . front();
        q . pop();
        
        for (auto it : adjacency_list[node])
        {
            if (visited[it] == true)
            {
                continue;
            }

            int next_node = it;
            q . push (next_node);
            distances[next_node] = 1 + distances[node];
            visited[next_node] = true;
        }
    }
}

int main()
{
    int nodes, edges, source, u, v;

    cout << "Node number = ";
    cin >> nodes;
    cout << "Edge number = ";
    cin >> edges;

    cout << "Enter connections:" << endl;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        adjacency_list[u] . push_back(v);
        adjacency_list[v] . push_back(u);
    }
    
    cout << "Source node = ";
    cin >> source;

    shortest_distance (source);
    cout << "shortest distance:" << endl;
    for (int i = 0; i < nodes; i++)
    {
        cout << "from " << source << " to " << i << " is " << distances[i] << endl;
    }

    return 0; 
}

