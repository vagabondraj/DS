#include<bits/stdc++.h>
using namespace std;

void printSubseq(int arr[], vector<int> &box, int idx, int n)
{
    if(idx >= n)
    {  
        for(auto it: box)
        {
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    // take
    box.push_back(arr[idx]);
    printSubseq(arr,box,idx+1,n);

    // not take
    box.pop_back();
    printSubseq(arr,box,idx+1,n);
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    vector<int> box;
    printSubseq(arr,box,0,n);

    return 0;
}