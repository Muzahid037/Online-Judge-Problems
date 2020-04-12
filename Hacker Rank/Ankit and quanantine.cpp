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
        ll n,st,ed;
        cin>>n;
        ll a[n+5][n+5];
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=n; j++)
            {
                cin>>a[i][j];
                if(i==x1 && j==y1)
                {
                    st=a[i][j];
                }
                else if(i==x2 && j==y2)
                {
                    ed=a[i][j];
                }
            }
        }
        if(x1==x2 && y1==y2){
            cout<<"0"<<endl;
            continue;
        }
        ll ans=0;
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=n; j++)
            {
                if(a[i][j]<st && a[i][j]>ed)
                {
                    ans++;
                }
            }
        }
        if(ans==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<ans+1<<endl;
        }
    }
    return 0;
}
