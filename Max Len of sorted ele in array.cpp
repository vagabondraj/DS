// finding max lenght of sorted array

# include<bits/stdc++.h>
using namespace std;

void maxlen(int a[], int n)
{
    if(n==0)
    {
        cout << "Array is already empty so max size of sorted subarray is zero." << endl;
        return;
    }


    int cntlen=1;
    int maxlen=1;

    for(int i=0; i<n-1; i++)
    {
        if(a[i] < a[i+1])
        {
            cntlen++;
        }else
        {
            maxlen = max(maxlen, cntlen);
            cntlen=1;
        }
    }
    maxlen = max(maxlen,cntlen);
    cout << "Maximum lenght of subarray which is in sorted manner is:-";
    cout << maxlen << endl;
}

int main()
{
    int n;
    cout << "Enter size of array:-" << endl;
    cin >> n;

    if(n<0)
    {
        cout << "Please enter valid size of array"<< endl;
    }

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    maxlen(a,n);

    return 0;
}