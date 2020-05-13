#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
map<ll,ll>mp;
int main()
{
    ll n,a;
    cin>>n;
    for(ll i=1; i<=n-1; i++)
    {
        cin>>a;
        mp[a]++;
    }
    for(ll i=1; i<=n; i++)
    {
        cout<<mp[i]<<endl;
    }
    mp.clear();
    return 0;
}

