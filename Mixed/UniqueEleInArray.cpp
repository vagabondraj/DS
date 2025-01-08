#include<bits/stdc++.h>
using namespace std;

int searchUnique(int a[], int n)
{
    if(a[0] != a[1])
    {
        return a[0];
    }

    if(a[n-1] != a[n-2])
    {
        return a[n-1];
    }
    
    for(int i=1; i<n-1; i++)
    {
       int left = i-1;
       int idx = i;
       int right = i+1;
       if((a[idx] != a[left]) && (a[idx] != a[right]))
       {
        return a[idx];
       }
    }
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