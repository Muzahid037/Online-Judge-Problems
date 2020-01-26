#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n],b[n],c[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    c[0]=b[0];
     for(int i=1;i<n;i++)
    {
        c[i]=c[i-1]-a[i]+b[i];
    }
    for(int i=1;i<n;i++)
    {
        if(c[0]<c[i]){c[0]=c[i];}
    }
    cout<<c[0]<<endl;
}
