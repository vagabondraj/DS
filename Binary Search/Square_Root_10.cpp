#include<bits/stdc++.h>
using namespace std;

int Square_root(int n)
{
    int low=0;
    int high=n;
    int ans=0;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(mid*mid > n)
        {
            high=mid-1;
        }else
        {
            ans = mid;
            low=mid+1;
        }
    }
    return ans;
}

int main()
{
    int n; 
    cout << "Enter number:- " ;
    cin >> n;

    cout << "Square root element is:- " << Square_root(n) << endl;
    return 0;
}