//     Minimum value in sorted rotated array

#include<bits/stdc++.h>
using namespace std;


void ans(int a[], int size)
{
    int low =0;
    int high =size-1;
    int ret = INT_MAX;

    while(low<=high)
    {
        int mid = (low+high)/2;

        // if whole array or search space si sorted

        if(a[low] <= a[high])
        {
            ret= min(ret,a[mid]);
            break;
        }
        // if left part is sorted
        if(a[low] <= a[mid])
        {
            ret = min(ret,a[low]);
            low = mid+1;
        }else
        {
            ret = min(ret,a[mid]);
            high = mid-1;
        }
    }
    cout << "Minimum element is :- " << ret << endl;
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

    ans(a,n);
    return 0;
}