#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define sf scanf
#define pf printf
#define pb push_back
#define F first
#define S second
ll mx=1000000000000000000;
int main()
{
    BOOST

    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x[n+5];
        bool flag=false;
        for(ll i=0; i<n; i++)
        {
            cin>>x[i];
            if(x[i]==0)
            {
                flag=true;
            }
        }
        if(flag==true)
        {
            cout<<"0"<<endl;
            return 0;
        }
        sort(x,x+n);
        ll ans=1;
        for(ll i=0; i<n; i++)
        {
            ll tmp=ans;
            if(tmp>ans*x[i] || ans*x[i]>1000000000000000000)
            {
              cout<<"-1"<<endl;
              return 0;
            }
            ans*=x[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
