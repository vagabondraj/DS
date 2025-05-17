#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, int ParentNode, vector<int> adj[], int vis[])
{
    vis[node]=1;

    for(auto it : adj[node])
    {
       if(vis[it] == 0)
       {
        if(dfs(it , node, adj,vis))
        {
            return true;
        }
       }else if(ParentNode != it)
       {
        return true;
       }
    }
    return false;
}

void DetectCycle(vector<int> adj[], int n)
{
    int vis[n]={0};
    vis[0]=1;
    if(dfs(1, -1, adj, vis))
    {
        cout << "Cycle Found." << endl;
    }else
    {
        cout << "No Cycle Found." << endl;
    }
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
  
    DetectCycle(adj,n);
    return 0;
}