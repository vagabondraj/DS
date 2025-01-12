/* you are given different cards and you can only pick cards from either ends
    what's is the maximum point one can gain*/

#include<bits/stdc++.h>
using namespace std;

void max_Points(int a[], int n, int k)
{
    int left_sum=0;
    int right_sum=0,right_idx=n-1;
    int max_sum=0;
    for(int i=0; i<k; i++)
    {
        left_sum+=a[i];
    }

    max_sum=left_sum;

    for(int i=k-1; i>=0; i--)
    {
        left_sum-=a[i];
        right_sum+=a[right_idx];
        right_idx--;
        int sum = left_sum+right_sum;
        max_sum=max(max_sum,sum);
    }

    cout << "Maximum point one can gain if he take " << k << " cards is:-" << max_sum << endl;
}


int main()
{
    int n;
    cout << "Enter size of array:-";
    cin >> n;


    int a[n];
    cout << "Enter ele:-";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int k;
    cout << "Enter max card ione can extract:-";
    cin >> k;
    max_Points(a,n,k);
    return 0;
}