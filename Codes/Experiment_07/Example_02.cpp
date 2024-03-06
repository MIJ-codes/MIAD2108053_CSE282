//Breadth first traversal of graph

#include<bits/stdc++.h>

using namespace std;

vector <int> adj[100];
int visited[100];

vector <int> Breadth_First_Search (int source)
{
    vector <int> BFS;
    queue <int> q;

    visited[source] = 1;
    q . push(source);

    while (!q . empty())
    {
        int node = q . front();
        q . pop();
        BFS . push_back(node);

        for (auto i : adj[node])
        {
            int next_node = i;
            if (visited[next_node] == 1)
            {
                continue;
            }

            visited[next_node] = 1;
            q . push(next_node);
        }
    }
    return BFS;
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

    BFS = Breadth_First_Search(source);

    for (auto i : BFS)
    {
        cout<< i << " ";
    }

    return 0;

}