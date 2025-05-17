#include<bits/stdc++.h>
using namespace std;

bool DetectCycle(vector<int> adj[], int n)
{
    vector<int> vis(n,0);
    vis[0]=1;
    queue<pair<int, int>> q;
    q.push({1, -1});

    while(!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for(auto it : adj[node])
        {
            if(vis[it] == 0)
            {
                vis[it] = 1;
                q.push({it, node});
            }else if( parent != it)
            {
                return true;
            }
        }
    }
    return false;
}


int main()
{
    int n,m;
    cout << "Enter numbers of nodes and edges: ";
    cin >> n >> m;

    vector<int> adj[n+1];
    cout << "U-V" << endl;
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
  
    if(DetectCycle(adj,n))
    {
        cout << "Cycle found" << endl;
    }else
    {
        cout << "No Cycle found" << endl;
    }
    
    return 0;
}