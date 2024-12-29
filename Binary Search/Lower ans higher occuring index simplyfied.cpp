#include<bits/stdc++.h>
using namespace std;



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

    int low_bound = lower_bound(a,a+n,target)-a;
    int High_bound = upper_bound(a,a+n,target)-a;

    if(low_bound == n || a[low_bound] != target)
    {
        cout << "Element not found" << endl;
    }else
    {
        cout << "Lower index:- " << low_bound << endl;
        cout << "Higher index:- " << High_bound << endl;
        cout << "Number of times target repeat is :-" << High_bound - low_bound << endl;
    }
    return 0;
}