 // ContainerWithMostWater.cpp

#include<bits/stdc++.h>
using namespace std;


int maxArea(int arr[], int n)
{
    int left =0,right=n,AreaMax=0;

    while(left < right)
    {
        int Area = min(arr[left], arr[right]) * (right-left);
      
        AreaMax = max(AreaMax,Area);

       if(left < right)
       {
        left++;
       }else
       {
        right--;
       }
    }
    return AreaMax;
}

int main()
{
    int n;
    cout << "Enter size of array:-" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements:-" << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    } 

    cout << "Maximum area :- " << maxArea(arr,n) << endl;
   return 0;
}