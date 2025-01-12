#include<bits/stdc++.h>
using namespace std;

void Printset(int a[], int right, int left)
{
    for(int i=left; i<=right; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void sub_set (int a[], int n, int k)
{
    int left=0,right=0,sum=0;
    int max_length=0;
    while(right<n)
    {
        sum+=a[right];
        while(sum>k)
        {
            sum-=a[left];
            left++;
        }
        if(sum<=k)
        {
          max_length= max(max_length,right-left+1);
          Printset(a,right,left);
        }
        right++;
    }
    cout <<"Maximum length of subset is:-" <<  max_length << endl;
}

int main()
{
    int n;
    cout << "Enter size of array:- ";
    cin >> n;

    int a[n];
    cout << "Enter ele in array:-";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int k;
    cout << "Enter the sum you want:-";
    cin >> k;

    sub_set(a,n,k);
    return 0;
}