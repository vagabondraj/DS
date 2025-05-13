#include<bits/stdc++.h>
using namespace std;

void reverseArr(int start, int arr[], int n)
{
   if(start >= n/2)
   {
    return;
   }

   swap(arr[start],arr[n-start-1]);
   reverseArr(start+1,arr,n);
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

    reverseArr(0,arr,n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}