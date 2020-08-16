///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 2000000000LL;
void solve()
{
    ll n,aMin=inf,bMin=inf,ans=0;
    cin>>n;
    ll a[n+5],b[n+5];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        aMin=min(aMin,a[i]);
    }
    for(ll i=0; i<n; i++)
    {
        cin>>b[i];
        bMin=min(bMin,b[i]);
    }
    for(ll i=0; i<n; i++)
    {
        a[i]-=aMin;
        b[i]-=bMin;
    }
    for(ll i=0; i<n; i++)
    {
        ll both=min(a[i],b[i]);
        ans+=(both+(a[i]-both)+(b[i]-both));
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}
