#include<bits/stdc++.h>
using namespace std;

int Nth_Square_root(int n,int r)
{
    int low=1;
    int high=n;
    int ans=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        long long p = pow(mid,r);
        if(p == n)
        {
            return mid;
        }else if(p > n)
        {
            high =mid-1;
        }else
        {
            low = mid+1;
        }
    }
    return ans;
}

int main()
{
    int n; 
    cout << "Enter number:- " ;
    cin >> n;

    int r;
    cout << "Enter nth root:-";
    cin >> r;

    cout << "Square root element is:- " << Nth_Square_root(n,r) << endl;
    return 0;
}