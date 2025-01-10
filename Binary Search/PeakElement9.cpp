#include<bits/stdc++.h>
using namespace std;

int PeakElement(int a[], int n)
{
    if(n== 1)
    {
        return a[0];
    }
    else if(a[0] > a[1])
    {
        return a[0];
    }else if(a[n-1] > a[n-2])
    {
        return a[n-1];
    }

    int low=1;
    int high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(a[mid] > a[mid-1] && a[mid] > a[mid+1])
        {
            return a[mid];
        }

        if(a[mid] > a[mid-1])
        {
            low=mid+1;
        }else if(a[mid] < a[mid+1])
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

    cout << "Peak element is:- " << PeakElement(a,n) << endl;
    return 0;
}