//Finding the distance between the nodes of a graph

#include<bits/stdc++.h>

using namespace std;

vector <int> adj[100];
int Distance[100], visited[100];

void Breadth_First_Search (int source)
{
    queue <int> q;

    Distance[source] = 0;
    visited[source] = 1;
    q . push(source);

    while (!q . empty())
    {
        int node = q . front();
        q . pop();

        for (auto i : adj[node])
        {
            int next_node = i;
            if (visited[next_node] == 1)
            {
                continue;
            }

            Distance[next_node] = 1 + Distance[node];
            visited[next_node] = 1;
            q . push(next_node);
        }
    }
}

int main ()
{
    int i, j, k;
    int n, e;
    vector <int> BFS;

    cout<< "No of nodes: ";
    cin>> n;

    cout<< "No of edges: ";
    cin>> e;

    cout<< "Enter the edge connections:" << endl;

    for (i = 0; i < e; i++)
    {
        int u, v;

        cin>> u >> v;
        adj[u] . push_back(v);
        adj[v] . push_back(u);
    }

    int source;

    cout<< "Enter the source node: ";
    cin>> source;

    Breadth_First_Search(source);

    for (i = 1; i <= n; ++i)
    {
        cout<< "Distance " << source << " to " << i << " = " << Distance[i] << endl;
    }

    return 0;
}