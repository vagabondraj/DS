# include<bits/stdc++.h>
using namespace std;


bool CanBePlaced(int a[], int n,int cow, int dis)
{
    // considering one cow can be placed atleast
    int c=1;
    // first cow placed at first corrdinate 
    int last_cow =a[0];

    for(int i=0; i<n; i++)
    {
        if(a[i]-last_cow >= dis)
        {
            // incresing cow number
            c++;
            // updating cow to last_index to new coordinate
            last_cow=a[i];
        }
    }

    if(c>=cow)
    {
        return true;
    }else
    {
        return false;
    }
}

int cowPlaced(int a[], int n, int cow, int dis)
{
    // min coordinate at which cow can be placed
    int min_c=INT_MAX;
    // max coordinate at which cow can be placed
    int max_c=INT_MIN;
    for(int i=0; i<n; i++)
    {
        min_c=min(min_c,a[i]);
        max_c=max(max_c,a[i]);
    }
    // since 
    int low=min_c;
    int high = max_c;
    int ans=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        int p=CanBePlaced(a,n,cow,dis);
        if(p == true)
        {
            low=mid+1;
            ans=1;
        }else
        {
            high=low-1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter no of coordinates:-";
    cin >> n;

    int a[n];
    cout << "Enter coordinates:-";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
  
    int cow;
    cout << "Enter numbers of cows you want to place:-";
    cin >> cow;

    int dis;
    cout << "Enter min distance between two cows:-";
    cin >> dis;

    int sol=cowPlaced(a,n,cow,dis);
    if(sol == 1)
    {
        cout << "Cows can be placed" << endl;
    }else
    {
        cout << "Cows can't be placed" << endl;
    }

    return 0;
}