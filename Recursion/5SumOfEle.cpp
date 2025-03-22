#include<bits/stdc++.h>
using namespace std;

int sum(int arr[], int size)
{
    // base case
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];
    }

    return arr[0] + sum(arr+1,size-1);
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
    cout << "Sum of all elements of array is : " << sum(arr,n);
    return 0;
}