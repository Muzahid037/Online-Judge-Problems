///***Bismillahir Rahmanir Rahim***///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll findMaxFibSegment(ll a[],ll n)
{
    if(n<3) return n;
    ll ans=2,cnt=0;
    for(ll i=2; i<n; i++)
    {
        if(a[i-2]+a[i-1]==a[i]) cnt++;
        else
        {
            ans=max(ans,cnt+2);
            cnt=0;
        }
    }
    ans=max(ans,cnt+2);
    return ans;
}
int main()
{
    ll n;
    cin>>n;
    ll a[n+5];
    for(ll i=0; i<n; i++) cin>>a[i];
    cout<<findMaxFibSegment(a,n)<<endl;


    ///-------sol:1------///
    /*
    ll n;
    cin>>n;
    ll a[n+5],ans=1,cnt=0;
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
        if(i>2)
        {
            //cout<<a[i-2]<<" "<<a[i-1]<<" "<<a[i]<<endl;
            if(a[i-2]+a[i-1]==a[i])
            {
                cnt++;
                continue;
            }
            else
            {
                //cout<<"b"<<endl;
                if(cnt>0) ans=max(ans,cnt+2);
                cnt=0;
            }
        }
        if(i>1) ans=max(ans,2LL);
    }
    //cout<<cnt<<endl;
    if(cnt>0) ans=max(ans,cnt+2);
    cout<<ans<<endl;

    */



    return 0;
}
