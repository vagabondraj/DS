#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if(n == 0)
    {
        return 1;
    }

    long long ans = n*fibo(n-1);
    return ans;
}

int main()
{
    long long n;
    cout << "Enter number:- " << endl;
    cin >> n;

    cout << "Number is: " << fibo(n);
    return 0;
}