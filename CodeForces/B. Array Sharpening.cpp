#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

map<ll,ll>mp;

int main()
{
    ll t;
    cin>>t;


    for(ll i=0; i<t; i++)
    {
        ll n,x;

        cin>>n;
        //map<ll,ll>mp;
        int flag=0,cnt0=0;
        for(int j=0; j<n; j++)
        {
            cin>>x;
            mp[x]++;
            if(x==0){cnt0++;}
            if(mp[x]==(x+1) && x!=0)
            {
                flag++;
               // break;
            }
        }

    if(flag>0 || cnt0>1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    mp.clear();
}

return 0;
}
