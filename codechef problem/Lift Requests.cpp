#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,q,f,d;
        cin>>n>>q;
        ll st=0,ans=0;
        for(ll i=0; i<q; i++)
        {
            cin>>f>>d;
            ans+=abs(st-f)+abs(f-d);
            st=d;
        }
        cout<<ans<<endl;
    }



    return 0;
}
