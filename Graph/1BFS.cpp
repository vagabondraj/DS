#include<bits/stdc++.h>
using namespace std;

void bfsOfGraph(vector<int> adj[], vector<int> &bfs, int n)
{
    // take a visited array 
    vector<int> visArray(n,0);
    visArray[0]=1; // start traversal from zero idx
    // take a queue to store nodes for traversal
    queue<int> q;
    q.push(1); // first node zero is pushed

    while(!q.empty())
    {
        // take a node from queue i.e., pop it
        int node = q.front();
        q.pop();
        // then push it in bfs too
        bfs.push_back(node);

        for(auto it : adj[node])
        {
            if(visArray[it] == 0)
            {
                // if it's not visted then first mark it as visited and then push it in queue
                visArray[it]=1;
                q.push(it);
            }
        }
    }
}

int main()
{
    int n,m;
    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter numbers of edges: ";
    cin >> m;

    vector<int> adj[n];
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> bfs;
    bfsOfGraph(adj,bfs,n);
    cout << "BFS Search is :: -->>  " << endl;
    for(auto it: bfs)
    {
        cout << it << " ";
    }

    return 0;
}