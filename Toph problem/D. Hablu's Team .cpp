#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,k,x;
    cin>>n>>k;
    vector<ll>skill;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        skill.push_back(x);
    }
    sort(skill.begin(),skill.end());

    ll ans=0;
    for(ll i=0; i<n; i++)
    {
        if(skill[i]>=k)
        {
            break;
        }
        ll x=upper_bound(skill.begin(),skill.end(),k-skill[i]-1)-skill.begin();
        //cout<<i<<" "<<skill[i]<<" "<<x-i-1<<endl;
        ans+=max(0LL,x-i-1);
    }
    cout<<ans<<endl;
    return 0;
}
