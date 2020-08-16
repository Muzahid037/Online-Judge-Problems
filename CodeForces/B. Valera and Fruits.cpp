///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
#define Boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
ll n,v,a[3005],b[3005];
int main()
{
    Boost();
    cin>>n>>v;
    for(ll i=0; i<n; i++) cin>>a[i]>>b[i];
    ll ans=0,fromPrevDay=0;
    for(ll day=1; day<=3001; day++)
    {
        ll curDay=0;
        for(ll i=0; i<n; i++)
        {
            if(a[i]==day) curDay+=b[i];
        }
        if (curDay+fromPrevDay<=v)
        {
            ans+=fromPrevDay+curDay;
            fromPrevDay=0;
        }
        else
        {
            ll capacity=v;
            ll takenFromPrev=min(fromPrevDay,capacity);
            ans+=takenFromPrev;
            capacity-=takenFromPrev;
            ll takenFromCurrDay=min(capacity,curDay);
            ans+=takenFromCurrDay;
            fromPrevDay=curDay-takenFromCurrDay;
            //cout<<fromPrevDay<<endl;
        }
    }
    cout<<ans<<endl;
    return 0;
}





///another a/c sol:
/*
///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
#define Boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
ll n,v,a[3005],b[3005];
int main()
{
    Boost();
    cin>>n>>v;
    for(ll i=0; i<n; i++) cin>>a[i]>>b[i];
    ll ans=0,fromPrevDay=0;
    for(ll day=1; day<=3001; day++)
    {
        ll curDay=0;
        for(ll i=0; i<n; i++)
        {
            if(a[i]==day) curDay+=b[i];
        }
        if (curDay+fromPrevDay<=v)
        {
            ans+=fromPrevDay+curDay;
            fromPrevDay=0;
        }
        else
        {
            ans+=v;
            ll takenFromCurrDay=max(0LL,v-fromPrevDay);
            fromPrevDay=curDay-takenFromCurrDay;
        }
    }
    cout<<ans<<endl;
    return 0;
}

*/

