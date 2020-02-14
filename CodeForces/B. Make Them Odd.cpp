#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        ll n,x;
        cin>>n;

        set<ll,greater<ll> >v;
        ll odd=0;
        for(ll j=0; j<n; j++)
        {
            cin>>x;
            if(x%2==0)
            {
                odd++;
                v.insert(x);
            }
        }
//        for(set<ll,greater <ll> >::iterator it=v.begin(); it!=v.end(); it++)
//        {
//            cout<<*it<<endl;
//        }

        ll cnt=0;
        while(!v.empty())
        {
            set<ll,greater <ll> >::iterator it=v.begin();
            ll y=*it;
            v.erase(*it);
            //cout<<"*it= "<<*it<<endl;
            if(y%2==0)
            {
                cnt++;
                y/=2;
                if(y%2==0)
                {
                    v.insert(y);
                }
            }
        }
        cout<<cnt<<endl;

    }

    return 0;
}
