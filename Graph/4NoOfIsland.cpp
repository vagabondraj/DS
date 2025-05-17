#include<bits/stdc++.h>
using namespace std;

void cntIsland(int row, int col, vector<vector<int>> &vis, vector<vector<int>> &a)
{
    vis[row][col] = 1;
    queue<pair<int,int>> q;
    q.push({row,col});

    int n=a.size();
    int m=a[0].size();

    while(!q.empty())
    {
        int crow = q.front().first;
        int ccol = q.front().second;
        q.pop();

        for(int delrow=-1; delrow<=1; delrow++)
        {
            for(int delcol=-1; delcol<=1; delcol++)
            {
                int nrow = crow +delrow;
                int ncol= ccol +delcol;

                if(nrow>=0 && nrow <n && ncol>=0 && ncol<m && vis[nrow][ncol] == 0 && a[nrow][ncol] == 1)
                {
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
}

int main()
{
    int n,m;
    cout << "Enter numbers of rows and col: ";
    cin >> n >> m;
    
    vector<vector<int>> a(n,vector<int> (m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> a[i][j];
        }
    }

    int cnt=0;
    // visited 2d array
    vector<vector<int>> vis(n, vector<int> (m,0));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(vis[i][j] == 0 && a[i][j] == 1)
            {
                cnt++;
                cntIsland(i,j,vis,a);
            }
        }
    }
    cout << "Total numbers of island is : " << cnt << endl;
    return 0;
}