#include <bits/stdc++.h>

using namespace std;

vector <int> Breadth_First_Search (int source, vector <vector <int>> & adjacency_list)
{
    int nodes = adjacency_list.size();
    vector <bool> visited (nodes,false);
    vector <int> BFS_traversal;
    queue <int> q;

    visited[source] = true;
    q.push(source);

    while (!q.empty())
    {
        int current_node = q.front();
        q.pop();
        BFS_traversal.push_back(current_node);

        for (auto next_node : adjacency_list[current_node])
        {
            if (visited[next_node] == true)
            {
                continue;
            }
            else
            {
                visited[next_node] = true;
                q.push(next_node);
            }
        }
    }

    return BFS_traversal;
}
int main()
{
    int nodes, edges, source, u, v;

    cout << "Node number = ";
    cin >> nodes;

    int visited[nodes] = {0};
    vector <vector <int>> adjacency_list(nodes); 

    cout << "Edge number = ";
    cin >> edges;

    cout << "Enter connections: " << endl;
    for (int i = 0; i < edges; i++) 
    {
        cin >> u >> v;
        adjacency_list[u].push_back(v);
        adjacency_list[v].push_back(u);
    }

    cout << "Enter source = ";
    cin >> source;

    vector <int> BFS_traversal = Breadth_First_Search(source, adjacency_list);

    cout << "BFS traversal: ";
    for (auto it : BFS_traversal)
    {
        cout << it << " ";
    }

    return 0;
}