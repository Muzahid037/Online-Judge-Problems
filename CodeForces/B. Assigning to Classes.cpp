
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++)
    {
        ll n;
        cin>>n;
       vector<ll>x;
       ll a;
        for(ll j=0;j<2*n;j++)
        {
            cin>>a;
            x.push_back(a);
        }
        sort(x.begin(),x.end());
        cout<<abs(x[n-1]-x[n])<<endl;

    }

    return 0;
}
