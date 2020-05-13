#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mx=1000000000;
vector<ll>vt;
ll func(ll x)
{
    return (3*x*x+x)/2;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
//        func(n);
//        sort(vt.begin(),vt.end());
//        reverse(vt.begin(),vt.end());
//        for(vector<ll>::iterator it=vt.begin(); it!=vt.end(); it++)
//        {
//            cout<<*it<<" ";
//        }
        ll tmpN=n;
        ll ans=0;
        for(ll i=100000; i>0; i--)
        {
            ll tmp=func(i);
            while(tmp<=n)
            {
                n-=tmp;
                ans++;
            }
            if(n<2)
            {
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
