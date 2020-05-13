#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,ll>mp;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        for(ll i=0; i<n; i++)
        {
            ll c=s[i]-'a';
            mp[c]++;
        }
        for(ll k=0; k<q; k++)
        {
            ll x;
            cin>>x;
            ll ans=0;
            for(ll i=0;i<26;i++)
            {
                if(mp[i]>x)
                {
                    ans+=mp[i]-x;
                }
            }
            cout<<ans<<endl;
        }
        mp.clear();
    }
    return 0;
}

