#include<bits/stdc++.h>
using namespace std;

void cntNoOfProvinces(int node, vector<int> adj[], int vis[])
{
   vis[node]=1;
   for(auto it : adj[node])
   {
    if(vis[it] == 0)
    {
        cntNoOfProvinces(it,adj,vis);
    }
   }
}

void cnt(vector<int> adj[], int n)
{
    int vis[n]= {0};
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(vis[i] == 0)
        {
            cnt++;
            cntNoOfProvinces(i,adj,vis);
        }
    }
    cout << "Numbers of provinces are: " << cnt << endl;
}

int main()
{
    int n,m;
    cout << "Enter numbers of nodes and edges: ";
    cin >> n >> m;

    vector<int> adj[n];
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cnt(adj,n);
    return 0;
}