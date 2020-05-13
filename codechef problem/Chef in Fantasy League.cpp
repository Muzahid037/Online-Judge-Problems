#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        vector<ll>p,zero,one;
        for(ll i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            p.push_back(x);
        }
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            if(x==0)
            {
                zero.push_back(p[i]);
            }
            else
            {
                one.push_back(p[i]);
            }
        }
        sort(zero.begin(),zero.end());
        sort(one.begin(),one.end());

        // cout<<zero[0]<<" "<<one[0]<<endl;
        if(zero.empty() || one.empty())
        {
            cout<<"no"<<endl;
            continue;
        }
        ll sum=s+zero[0]+one[0];

        if(sum>100)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }
    }
    return 0;
}

