#include<bits/stdc++.h>
using namespace std;

int MaxEle(int a[], int n)
{
    int max = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}

int TotalTime(int a[], int hrs,int n)
{
    int total=0;
    for(int i=0; i<n; i++)
    {
        if(a[i] %5 !=0)
        {
            total+=(a[i]/hrs)+1;
        }else
        {
            total+=a[i]/hrs;
        }
    }
    return total;
}

int MinHours(int a[], int n,int h)
{
    int low=1;
    int high=MaxEle(a,n);
    int ans=high;

    while(low<=high)
    {
        int mid = (low+high)/2;
        int time_taken = TotalTime(a,mid,n);

        if(time_taken > h)
        {
            low=mid+1;
        }else
        {
            high=mid-1;
            ans=mid;
        }
    }
    return ans;
}


int main()
{
    int n;
    cout << "Enter numbers of piles:-";
    cin >> n;

    int a[n];
    cout << "Enter numbers of bananas in each piles:-";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int h;
    cout << "Time available in hrs:-";
    cin >> h;

    if(h<n)
    {
        cout << "Not enough time to finish it" << endl;
    }else
    {
    cout << "Min rate per hrs he should eat:-" << MinHours(a,n,h)<< endl;
    }
    return 0;
}