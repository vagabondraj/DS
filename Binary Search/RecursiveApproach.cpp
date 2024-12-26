#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v, int low, int high, int target)
{
    low =0;
    high = v.size()-1;
    if(low>high)
    {
        return -1;
    }
    int mid = (low+high)/2;

    if(v[mid] == target)
    {
        return 1;
    }else if(v[mid] < target)
    {
        binarySearch(v,mid+1,high,target);
    }else
    {
        binarySearch(v,low,mid-1,target);
    }
}


int main()
{
    int n;
    cout << "Enter size of array:- " ;
    cin >> n;

    vector<int> v(n);
    cout << "Enter ele :-";
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    int target;
    cout << "Enter the target :- " ;
    cin >> target;

    int found = binarySearch(v,0,v.size()-1,target);

    if(found == 1)
    {
        cout << "Element found." << endl;
    }else
    {
        cout << "Element not found." << endl;
    }
    return 0;
}