#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

map<ll,ll>mp1,mp2;

int main()
{

    int t;
    scanf("%d",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);

        ll a[n+5],b[n+5];
        for(ll i=0; i<n; i++)
        {
            scanf("%lld %lld",&a[i],&b[i]);
            mp1[a[i]]++;
            mp2[b[i]]++;
        }

//        ll cnt1=0,cnt2=0;
//        for(ll i=0; i<n; i++)
//        {
//            for(ll j=0; j<n; j++)
//            {
//                if(a[i]==b[j])
//                {
//                    cnt1++;
//                }
//                if(a[j]==b[i])
//                {
//                    cnt2++;
//                }
//            }
//        }
//ll ans=max(cnt1,cnt2);
ll cnt=0;
     for(map<ll,ll>::iterator it=mp1.begin();it!=mp1.end();it++)
     {
         cout<<it->first<<" "<<it->second<<endl;
            cnt+=((mp2[it->first])*(it->second));

     }


        printf("%lld\n",cnt);

    }

    return 0;
}
