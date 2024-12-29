//    lower-Upper  Index

#include<bits/stdc++.h>
using namespace std;

int LowerIndex(int a[], int n, int target)
{
   int low=0;
   int high=n-1;
   int ans=-1;

   while(low<=high)
   {
    int mid = (low+high)/2;

    if(a[mid] == target)
    {
        ans=mid;
        high=mid-1;
    }else if(a[mid] > target)
    {
        high=mid-1;
    }else
    {
        low=mid+1;
    }
   }
   return ans;
}


int UpperIndex(int a[], int n, int target)
{
   int low=0;
   int high=n-1;
   int ans=0;

   while(low<=high)
   {
    int mid = (low+high)/2;
    if(a[mid] == target)
    {
        ans=mid;
        low=mid+1;
    }else if(a[mid] > target)
    {
        high= mid-1;
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
    cout << "Enter number :- ";
    cin >> target;
    
    int lower_Index = LowerIndex(a,n,target) ;
    int Higher_Index =UpperIndex(a,n,target);

    if(lower_Index == -1)
    {
        cout << "Element not found." << endl;
    }else
    {
        cout << "First occurence index:- " << lower_Index<< endl;
        cout << "Last occurence index:- " << Higher_Index<< endl;
        cout << "Number of times target element repeat is:-" << Higher_Index-lower_Index+1 << endl;
    }
    return 0;
}