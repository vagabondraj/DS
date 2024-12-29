#include<bits/stdc++.h>
using namespace std;

int searchInSortedRotated(int a[], int n, int target)
{
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid = (low+high)/2;

        if(a[mid] == target)
        {
            return mid;
        }

        //  if left part of array is sorted
        // mean elements on left hand is smaller or equal to the middle one i.e., a[low]<=a[mid]
        if(a[low] <= a[mid])
        {
            // now we check do target lies in left half
        if(a[low] <= target && target <= a[mid])
        {
            high = mid -1;
        }else
        {
            low = mid+1;
        }
        }else

        //  if right part of array is sorted
        {
            // checking do target lies in righ half
        if(target >= a[mid] && target <= a[high])
        {
            low = mid +1;
        }else
        {
            high = mid-1;
        }
        }
    }

    return -1;
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

    int ans = searchInSortedRotated(a,n,target);

    if(ans == -1)
    {
        cout << "ELement not found in array." << endl;
    }else
    {
        cout << "Element is present at index:- " << ans << endl;
    }
    
    return 0;
}