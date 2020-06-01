#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod=1000000007;
int main()
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n,x,ans=0;
        scanf("%lld",&n);
        for(ll i=0; i<n; i++)
        {
            scanf("%lld",&x);
            ans+=((x-1)*(2+(x-2)))/2;
            ans%=mod;
        }
        printf("%lld\n",ans);
    }


    return 0;
}
