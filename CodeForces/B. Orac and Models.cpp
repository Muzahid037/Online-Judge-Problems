#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll s[n+5],cnt[n+5];
        for(ll i=1; i<=n; i++)
        {
            cin>>s[i];
            cnt[i]=1;
        }

        ll ans=0;
        for(ll i=1; i<=n; i++)
        {
            for(ll j=2; i*j<=n; j++)
            {
                if(s[i*j]>s[i])
                {
                   // cout<<"i: "<<i<<" j: "<<j<<" s[i]: "<<s[i]<<" cnt[i]: "<<cnt[i]<<" s[i*j]: "<<s[i*j]<<" cnt[i*j]: "<<cnt[i*j]<<endl;
                    cnt[i*j]=max(cnt[i*j],cnt[i]+1);
                   // cout<<"i: "<<i<<" j: "<<j<<" s[i]: "<<s[i]<<" cnt[i]: "<<cnt[i]<<" s[i*j]: "<<s[i*j]<<" cnt[i*j]: "<<cnt[i*j]<<endl;
                }
            }
            ans=max(ans,cnt[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
