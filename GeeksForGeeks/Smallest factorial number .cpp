#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,ll>mp;
ll func()
{
    ll div5;
    for(ll i=1; i<=1000; i++)
    {
        div5=0;
        for(ll j=1; j<=i; j++)
        {
            ll tmp=j;
            while(1)
            {
                if(j%5==0)
                {
                    div5++;
                    j/=5;
                }
                else
                {
                    j=tmp;
                    break;
                }
            }
        }
        if(mp[div5]==0)
        {
            mp[div5]=i;
        }
    }
//    for(map<ll,ll>::iterator it=mp.begin(); it!=mp.end(); it++)
//    {
//        cout<<it->first<<" "<<it->second<<endl;
//    }
}

int main()
{
    int t;
    cin>>t;
    func();
    while(t--)
    {
        ll x;
        cin>>x;
        while(mp[x]==0){x++;}
        cout<<mp[x]<<endl;
    }
    return 0;
}


