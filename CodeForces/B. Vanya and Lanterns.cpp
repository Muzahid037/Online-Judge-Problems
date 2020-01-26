#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,l,a[10005];
    cin>>n>>l;

    int flag0=0,flagl=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]==0)
        {
            flag0=1;
        }
        if(a[i]==l)
        {
            flagl=1;
        }
    }
    sort(a,a+n);

    int mx=0;

    if(flag0==0)
    {
        mx=a[0]*2;
    }
    if(flagl==0)
    {
        int x=(l-a[n-1])*2;
        if(x>mx)
    {
        mx=x;
    }
}

for(int i=1; i<n; i++)
    {
        int x;
        x=a[i]-a[i-1];
        if( x>mx )
        {
            mx=x;
        }
    }

    cout<<setprecision(10)<<(double)mx/2<<endl;



    return 0;
}
