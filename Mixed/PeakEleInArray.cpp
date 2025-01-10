#include<bits/stdc++.h>
using namespace std;

int PeakElement(int a[], int n)
{
    if(a[0] > a[1])
    {
        return a[0];
    }

    if(a[n-2] < a[n-1])
    {
        return a[n-1];
    }

    for(int i=1; i<n-1; i++)
    {
        if(a[i-1] < a[i] && a[i] > a[i+1])
        {
            return a[i];
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

    cout << "Unique element is:- " << PeakElement(a,n) << endl;

    return 0;
}