#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve ()
{
    ll n,ans=0;
    cin>>n;
    vector<ll>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    vector<bool>vis(n,false);
    for(int j=31; j>=0; j--)
    {
        ll cnt=0;
        for(int i=0; i<n; i++)
        {
            if((1<<j)&(a[i]) && !vis[i])
            {
                cnt++;
                vis[i]=true;
            }
        }
        ans+=((cnt*(cnt-1))/2);
    }
    cout<<ans<<endl;
}
int main()
{
    Boost();

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
