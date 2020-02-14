#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;

    ll n,k;
    for(ll i=0;i<t;i++)
    {
        cin>>n>>k;
        ll x=n/k;
        ll y=x*k;
        ll ans=y+min(n%k,k/2);
        cout<<ans<<endl;
    }



    return 0;
}
