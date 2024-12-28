//  lower bound  i.e.,  arr[index]>=element_x;
//  upper bound i.e., index>element_x;
// function to find lower bound
// int ans = lower_bound(a.begin(),a.end(),low_bound);
// to find lower bound between index 2 ans 5 ans = lower_bound(a+2,a+5,low_bound);
// floor value  a[idx] <= element_x &&   coil value a[idx]>=element_x

#include<bits/stdc++.h>
using namespace std;

void lowerBound(int arr[], int n, int low_bound)
{
    int low =0;
    int high = n-1;
    int ans=n;

    while(low<=high)
    {
        int mid = (low+high)/2;

        if(arr[mid] >= low_bound)
        {
            ans = mid;
            high = mid-1;
        }else
        {
            low= mid+1;
        }
    }
    cout << "Lower bound index is:- " << ans << endl;
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

    int low_bound;
    cout << "Enter lower bound:-";
    cin >> low_bound;

    lowerBound(a,n,low_bound);

    return 0;
}