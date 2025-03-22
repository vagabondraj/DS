#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size)
{
    // base condition
    if(size == 0 || size == 1)
    {
        return true;
    }

    if(arr[0] > arr[1])
    {
        return false;
    }else
    {
        return isSorted(arr+1, size-1);
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
    
    if(isSorted(arr,n))
    {
        cout << "Array is sorted." << endl;
    }else
    {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}