#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll,ll>Vasya;
int main()
{
    ll n;
    cin>>n;
    ll a[n+10];
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
        Vasya[a[i]]=i;
    }
    ll m;
    cin>>m;
    ll b;
    ll vs=0,pt=0;
    for(ll i=0; i<m; i++)
    {
        cin>>b;
        vs+=Vasya[b];
        pt+=n-Vasya[b]+1;
    }
    cout<<vs<<" "<<pt<<endl;
    return 0;
}


