
#include<bits/stdc++.h>
using namespace std;

void issum(int arr[],int n, int target)
{
    int left =0;
    int right = n - 1;

    int cnt=0;
    while(left < right)
    {
        int sum = arr[left] + arr[right];
        if(sum == target)
        {
            cnt++;
            left++
            ;right--;
        }else if(sum < target)
        {
            left ++;
        }else
        {
            right --;
        }
    }
    
    if(cnt >0)
    {
    cout << "Total pair with sum " << target << " is:- " << cnt << endl;
    }else
    {
        cout << "No such pair present." << endl;
    }
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
    int target;
    cout << "Enter target:-" << endl;
    cin >> target;

    issum(arr,n,target);
   return 0;
}