#include<bits/stdc++.h>
using namespace std;

void binarySearch(vector<int> v,int target)
{

    if(v.size()==0)
    {
        cout << "It's empty no element found." << endl;
        return;
    }
    int low=0;
    int high = v.size()-1;

    while(low<=high)
    {
        int mid = (low+high)/2;

        if(mid == target)
        {
            cout << "Element  found at index : " << mid << endl;
            return;
        }else if(v[mid] < target)
        {
            low=mid+1;
        }else if(v[mid] > target)
        {
            high=mid-1;
        }
    }

    cout << "Element not found." << endl;
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

    binarySearch(v,target);
    return 0;
}