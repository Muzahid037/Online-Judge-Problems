#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n,k,j,l,a[1005];
    cin>>n>>k;
    if(n%2==0){int l=n-1;}
    else
    {
        l=n;
    }
    j=0;
    for(int i=1;i<=l;i+=2)
    {
        a[j]=i;
        j++;
    }
    j=j-1;
    for(int i=2;i<=l-1;i+=2)
    {
        a[j]=i;
        j++;
    }

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
