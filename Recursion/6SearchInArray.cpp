#include<bits/stdc++.h>
using namespace std;

bool search(int arr[], int size, int key)
{
    // base condition
    if(size == 0)
    {
        return false;
    }

    if(arr[0] == key)
    {
        return true;
    }else
    {
        return search(arr+1,size-1,key);
    }
}

int main()
{
    int n;
    cout << "Enter size of array:- " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements of array:- ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key element to be searched:- ";
    cin >> key;

    if(search(arr,n,key))
    {
        cout << "Element is present." << endl;
    }else
    {
        cout << "Element is not present." << endl;
    }

    return 0;
}