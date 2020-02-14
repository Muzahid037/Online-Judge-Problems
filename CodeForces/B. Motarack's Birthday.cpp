#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll t;
    cin>>t;
    for(ll i=0; i<t; i++)
    {
        ll n;
        cin>>n;
        ll a[n+5];
         for(ll j=0; j<n; j++)
        {
            cin>>a[j];
        }

        ll mx=0,mn=10000000005;
        for(ll j=0; j<n; j++)
        {
            if( j>0 && a[j]==-1 && a[j-1]!=-1)
            {
                mx=max(mx,a[j-1]);
                mn=min(mn,a[j-1]);
            }
             if( j<n-1 && a[j]==-1 && a[j+1]!=-1)
            {
                mx=max(mx,a[j+1]);
                mn=min(mn,a[j+1]);
            }
           // cout<<mx<<" "<<mn<<endl;
        }
        ll k;
        if(mx==0 || mn==10000000005)
        {
            k=0;
        }
        else
        {
            k=(mx+mn)/2;
        }

        ll diff=0;
        for(ll j=0; j<n; j++)
        {
            if(a[j]==-1)
            {
                a[j]=k;
            }
            if(j>0)
            {
                diff=max(diff,abs(a[j]-a[j-1]));
            }
        }

        cout<<diff<<" "<<k<<endl;


    }

    return 0;
}
