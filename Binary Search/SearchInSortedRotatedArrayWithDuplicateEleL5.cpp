#include<bits/stdc++.h>
using namespace std;

// SearchInSortedRotatedArrayWithDuplicateEle

bool SearchInSortedRotated(int a[], int n, int target)
{
    int low=0;
    int high = n-1;
    int ans =-1;

    while(low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid] == target)
        {
            return true;
        }

        // if mid equal to low and high i.e., we can't guess which side is sorted
        if(a[mid] == a[low] && a[mid] == a[high])
        {
            low++;
            high++;
            continue;
           // we trim low and high simultanesouly  and continue 
        }

        // now if left half is sorted
        if(a[low] <= a[mid])
        {
            if(a[low] <= target && target <= a[mid])
            {
                high=mid-1;
            }else
            {
                low=mid+1;
            }
            // when right half is sorted
        }else
        {
            if(a[mid] <= target && target <= a[high])
            {
                low = mid+1;
            }else
            {
                high = mid-1;
            }
        }

    }
    return false;
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

    int idx = SearchInSortedRotated(a,n,target);
    if(idx == 1)
    {
        cout << "Element is found." << endl;
    }else
    {
        cout << "Element not found." << endl;
    }
    return 0;
}