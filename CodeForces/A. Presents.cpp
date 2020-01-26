///"Bismillahir Rahmanir Rahim"

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5],idx[n+5];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i-1];
        idx[a[i-1]]=i;
    }
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        cout<<idx[a[i]]<<" ";
    }
    cout<<"\n";

    return 0;
}
