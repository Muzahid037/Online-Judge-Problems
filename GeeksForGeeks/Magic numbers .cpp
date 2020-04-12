#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1000000007;

ll gcd(int x,int y)
{
    if(x==0)
    {
        return y;
    }
    else if(y==0)
    {
        return x;
    }
    else if(x==y)
    {
        return x;
    }
    else if(x>y)
    {
        gcd(x-y,y);
    }
    else
    {
        gcd(x,y-x);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll x[n+10];
        ll product=1,gc=0;
        for(int i=0; i<n; i++)
        {
            cin>>x[i];
            product*=x[i];
            product%=mod;
            gc=gcd(gc,x[i]);

        }
       //cout<<product<<" "<<gc<<endl;
       ll ans=1;
       while(gc--)
       {
          ans=(ans*product)%mod;
       }
        cout<<ans<<endl;
    }
    return 0;
}
