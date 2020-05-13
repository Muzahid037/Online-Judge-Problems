#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod= 1000000007;
ll mn=-10000000009;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll x[n+5];
        ll mxPos=0,mxNeg=mn;
        ll cntPos=0,cntNeg=0,ans=0;
        for(ll i=0; i<n; i++)
        {
            cin>>x[i];
            if(x[i]>0)
            {
                mxPos=max(mxPos,x[i]);
                if(mxNeg!=mn)
                {
                    //cout<<"mxNeg: "<<mxNeg<<endl;
                    ans+=mxNeg;
                    mxNeg=mn;
                }
            }
            else
            {
                mxNeg=max(mxNeg,x[i]);
                if(mxPos!=0)
                {
                   // cout<<"mxPos: "<<mxPos<<endl;
                    ans+=mxPos;
                    mxPos=0;
                }
            }
        }
        if(mxPos!=0)
        {
            ans+=mxPos;
        }
        else if(mxNeg!=mn)
        {
            ans+=mxNeg;
        }
        cout<<ans<<endl;

    }

    return 0;
}

