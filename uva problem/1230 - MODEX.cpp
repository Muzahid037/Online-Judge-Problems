#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll binpow(ll num,ll pow,ll mod)
{
    num%=mod;
    ll res=1;
    while(pow>0)
    {
        if(pow&1)
        {
            res=(res*num)%mod;
        }
        num=(num*num)%mod;
        pow>>=1;

    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,n;
        cin>>x>>y>>n;
        ll ans=binpow(x,y,n);
        cout<<ans<<endl;
    }
    cin>>t;

    return 0;
}
