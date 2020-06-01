/// Bismillahir Rahmanir Rahim ///
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            ll ans=0;
            ll nth=n/2;
            //cout<<nth<<endl;
            for(ll i=1; i<=nth; i++)
            {
                ans+=8LL*i*i;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}

