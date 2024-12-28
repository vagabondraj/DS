/*
Problem Statement: You are given a sorted array arr of distinct values and a target value x.
 You need to search for the index of the target value in the array.

If the value is present in the array, then return its index. Otherwise, 
determine the index where it would be inserted in the array while maintaining the sorted order.
*/


#include<bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int n, int target)
{
    int low=0;
    int high=n-1;
    int ans =0;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid] >= target)
        {
            ans = mid;
            high = mid-1;
        }else
        {
            low = mid+1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter size of array:-";
    cin >> n;
    int a[n];
    cout << "Enter elements in array:-" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int target;
    cout << "Enter target to be searched:-";
    cin >> target;

    cout << "Index:-" << lowerBound(a,n,target);
    return 0;    
}