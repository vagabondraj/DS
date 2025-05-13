 #include<bits/stdc++.h>
using namespace std;

void GeneratePermutation(vector<int> &box, int freq[], int arr[], int n)
{
   // base case
   if(box.size() == n)
   {
    for(auto it: box)
    {
        cout << it << " ";
    }
    cout << endl;
    return;
   }

   for(int i=0; i<n; i++)
   {
    if(!freq[i])
    {
        box.push_back(arr[i]);
        freq[i]=1;
        GeneratePermutation(box,freq,arr,n);
        box.pop_back();
        freq[i]=0;
    }
   }
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    vector<int> box;
    // initializing freq with zero use to mark which one is picked and which one is left
    int freq[n] = {0};

    GeneratePermutation(box,freq,arr,n);
    return 0; 
}