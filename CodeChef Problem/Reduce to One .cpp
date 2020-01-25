#include<bits/stdc++.h>
using namespace std;

unsigned long long int arr[100000000];
const unsigned long long int M = 1e9+7;

void precal()
{
    arr[1]=1;
    for(int i=2; i<100000000; i++)
    {
        arr[i]=((arr[i-1]+i)%M + (arr[i-1]*i)%M )%M;
    }
}


int main()
{
    precal();
    int t,n;
    cin>>t;
    for(long long i=0; i<t; i++)
    {
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}
