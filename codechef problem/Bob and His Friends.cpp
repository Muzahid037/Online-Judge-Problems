#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
    ll t;
    cin>>t;

    for(ll i=0; i<t; i++)
    {
        ll n,a,b,c;
        cin>>n>>a>>b>>c;

        ll f,ans=1e15;
        for(ll j=0; j<n; j++)
        {
            cin>>f;

            ll x=abs(f-a);
            ll y=abs(f-b);
            ans=min(ans,x+y+c);

        }

        cout<<ans<<endl;


    }



    return 0;
}
