#include<bits/stdc++.h>
using namespace std;

// idx(even,odd) -->> element is on right half so eliminate left half
// idx(odd,even) -->> element is on left half so eliminate right half

int searchUnique(int a[], int n)
{
    // if first ele is unique
    if(a[0] != a[1])
    {
        return a[0];
    }

    // if last ele is unique
    if(a[n-1] != a[n-2])
    {
        return a[n-1];
    }
    
    int low=1;
    int high =n-2;

    while(low <= high)
    {
        int mid = (low+high)/2;
        if(a[mid] != a[mid-1] && a[mid] != a[mid+1])
        {
            return a[mid];
        }

        // eleminate left half
        if(((mid%2 == 1) && (a[mid-1] == a[mid])) || ((mid%2 == 0) && (a[mid]==a[mid+1])))
        {
            low = mid+1;
        }else
        {
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n; 
    cout << "Enter size of array:- " ;
    cin >> n;
    int a[n];
    cout << "Enter elements:-";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    cout << "Unique element is:- " << searchUnique(a,n) << endl;

    return 0;
}