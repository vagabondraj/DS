#include<bits/stdc++.h>
using namespace std;

// traverse from left

vector<int> nextsmallestEle(int arr[], int n)
{
    vector<int> nge(n);
    stack<int> st;

    for(int i=0; i<n; i++)
    {
        while(!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }
        if(st.empty())
        {
            nge[i] = -1;
        }else
        {
            nge[i] = st.top();
        }
        st.push(arr[i]);
    }
    return nge;
}

int main()
{
    int size;
    cout << "Enter size of element: " << endl;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans = nextsmallestEle(arr,size);
    cout << "Nearest smallest element:- " << endl;
    for(int i=0; i<size; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}