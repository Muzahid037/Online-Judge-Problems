///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,a,ans=0;
        cin>>n>>x;
        vector<ll>per;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            if(a>=x) ans++;
            else per.push_back(a);
        }
        sort(per.begin(),per.end(),greater<ll>());
        int cnt=1;
        for(ll i=0; i<per.size(); i++)
        {
            if(cnt*per[i]>=x)
            {
                ans++;
                cnt=1;
            }
            else cnt++;
        }
        cout<<ans<<endl;
    }
    return 0;
}


