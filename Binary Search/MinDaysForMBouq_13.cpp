#include<bits/stdc++.h>
using namespace std;

int NoOfBuq(int a[], int n, int day,int k)
{
    int cnt=0,b=0;
    for(int i=0; i<n; i++)
    {
        if(day>=a[i])
        {
           cnt++;
           if(cnt == k)
           {
            b++;
            cnt=0;
           }
        }else
        {
            b+=(b/k);
            cnt=0;
        }

    }
    return b;
}

int Min_Buq(int a[], int n, int k,int p)
{
    int min=INT_MAX;
    int max=INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(max < a[i])
        {
            max=a[i];
        }else if(min > a[i])
        {
            min=a[i];
        }
    }

    int low=min;
    int high=max;
    int ans=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        int min_Buqu = NoOfBuq(a,n,mid,k);

        if(min_Buqu < p)
        {
            low=mid+1;
        }else
        {
            ans=mid;
            high=mid-1;
        }
    }
   
   return ans;

}

int main()
{
    int n;
    cout << "Enter size of array:-";
    cin >> n;

    int a[n];
    cout << "Enter days to bloom each flowers:-";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int p;
    cout << "Enter the no of boq he want:-";
    cin >> p;

    int k;
    cout << "Enter No Of continues:-";
    cin >> k;

    int ans = Min_Buq(a,n,k,p);

    if(ans == -1)
    {
        cout << "Not possible" << endl;
    }else
    {
        cout << "Min no of days req:-" << ans << endl;
    }

    return 0;    
}