#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll md=1000000007;
inline void normal(ll &a)
{
    a %= md;
    (a < 0) && (a += md);
}
inline ll modMul(ll a, ll b)
{
    a %= md, b %= md;
    normal(a), normal(b);
    return (a*b)%md;
}
inline ll modPow(ll b, ll p)
{
    ll r = 1;
    while(p)
    {
        if(p&1) r = modMul(r, b);
        b = modMul(b, b);
        p >>= 1;
    }
    return r;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n,a,x,y,ans=0;
        cin>>n>>a;
        for(int i = 1; i <= n; i++)
        {
            ll k=modPow(a,2*i-1);
            k%=md;
            ans+=k;
            ans%=md;
            a=(a*k);
            a%=md;
        }
        cout<<ans<<endl;
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll md=1000000007;
inline void normal(ll &a)
{
    a %= md;
    (a < 0) && (a += md);
}
inline ll modMul(ll a, ll b)
{
    a %= md, b %= md;
    normal(a), normal(b);
    return (a*b)%md;
}
inline ll modPow(ll b, ll p)
{
    ll r = 1;
    while(p)
    {
        if(p&1) r = modMul(r, b);
        b = modMul(b, b);
        p >>= 1;
    }
    return r;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        ll n,a,x,y,ans=0;
        cin>>n>>a;
        for(int i = 1; i <= n; i++)
        {
            ll k=modPow(a,2*i-1);
            k%=md;
            ans+=k;
            ans%=md;
            a=(a*k);
            a%=md;
        }
        cout<<ans<<endl;
    }
    return 0;
}
*/
