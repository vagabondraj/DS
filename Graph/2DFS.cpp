#include<bits/stdc++.h>
using namespace std;

void call(vector<int> adj[], int visArray[], vector<int> &dfs, int start)
{
    visArray[start]=1;
    dfs.push_back(start);
    for(auto it: adj[start])
    {
        if(!visArray[it])
        {
            call(adj,visArray,dfs,it);
        }
    }
}

void dfsOfGraph(vector<int> adj[], int n)
{
    vector<int> visArray(n,0);
    int start=0;
    vector<int> dfs;
    call(adj,visArray,dfs,start);
    for(auto it : dfs)
    {
        cout << it << " ";
    }
}

int main()
{
    int n,m;
    cout << "Enter numbers of nodes: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> m;

    vector<int> adj[n];
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfsOfGraph(adj,n);
    return 0;
}