#include<bits/stdc++.h>
using namespace std;

void isValid(vector<vector<int>> &q, int row, int col, int val, int n)
{
    for(int i=0; i<9; i++)
    {
        if(q[row][j]==val)
        {
            return false;
        }
        if(q[i][col]==val)
        {
            return false;
        }

        if(q[3*(row/3)+ i/3][3*(col/3)+i%3]==val)
        {
            return false;
        }
    }
    return true;
}

void solve(vector<vector<int>> &q, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(q[i][j] == 0)
            {
                for(int val=1; val<=9; val++)
                {
                    if(isValid(q,i,j,val,n))
                    {
                        q[i][j]=val;
                        if(solve(q,n))
                        {
                            return true;
                        }else
                        {
                            q[i][j]=0;
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n;
    cout <<  "Enter size of suduko: ";
    cin >> n;
   
    vector<vector<int>> q(n,vector<int>(n));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> q[i][j];
        }
    }

    if(solve(q,n)){
    cout << "SOlved: " << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << q[i][j] << " ";
        }
        cout << endl;
    }
    }else
    {
        cout << "Can't be solved" << endl;
    }

    return 0;
}