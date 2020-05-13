#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod= 1000000007;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        ll mid=(n/2);
        vector<ll>ft,sd;
        ll ev=2;
        for(ll i=0; i<mid; i++)
        {
            ft.push_back(ev);
            sd.push_back(ev-1);
            ev+=2;
        }
        for(ll i=0; i<mid; i++)
        {
            cout<<ft[i]<<" ";
        }
        for(ll i=0; i<mid-1; i++)
        {
            cout<<sd[i]<<" ";
        }
        cout<<sd[mid-1]+mid<<endl;

    }

    return 0;
}

