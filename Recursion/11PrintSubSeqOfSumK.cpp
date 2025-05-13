#include<bits/stdc++.h>
using namespace std;

void PrintSubSeqOfSumK(int arr[], vector<int> &box, int idx,int n, int key)
{
    if(idx >= n)
    {
        int sum=0;
        for(auto it: box)
        {
            sum+=it;
        }

        if(sum == key)
        {
            for(auto it: box)
            {
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    // take 
    box.push_back(arr[idx]);
    PrintSubSeqOfSumK(arr,box,idx+1,n,key);

    // not take
    box.pop_back();
    PrintSubSeqOfSumK(arr, box, idx+1, n, key);
    
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
    int key;
    cout << "Enter the sum: ";
    cin >> key;

    vector<int> box;
    PrintSubSeqOfSumK(arr,box,0,n,key);

    return 0; 
}