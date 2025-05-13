#include<bits/stdc++.h>
using namespace std;

void GeneratePermutation(int idx, int arr[], int n)
{
    if(idx == n)
    {
       for(int i=0; i<n; i++)
       {
        cout << arr[i] << " ";
       }
        cout << endl;
        return;
    }

    for(int i=idx; i<n; i++)
    {
        swap(arr[idx], arr[i]);
        GeneratePermutation(idx+1,arr,n);
        swap(arr[idx], arr[i]);
    }
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
    GeneratePermutation(0,arr,n);

    return 0; 
}