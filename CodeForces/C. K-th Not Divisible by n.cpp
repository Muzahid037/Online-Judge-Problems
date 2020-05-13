#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(k<n)
        {
            cout<<k<<endl;
        }
        else if(k==n)
        {
            cout<<k+1<<endl;
        }
        else
        {
            ll ans=k+(k/(n-1));
            if(k%(n-1)!=0)
            {
                cout<<ans<<endl;
            }
            else
            {
                cout<<ans-1<<endl;
            }
        }
    }
    return 0;
}

