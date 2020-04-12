#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1000000007;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p;
        cin>>n;
        vector<ll>prices;
        for(ll i=0; i<n; i++)
        {
            cin>>p;
            prices.push_back(p);
        }
        sort(prices.begin(),prices.end());
        reverse(prices.begin(),prices.end());
        ll profit=0;
        for(ll i=0; i<n; i++)
        {
            if((prices[i]-i)>0)
            {
                profit=(profit+(prices[i]-i))%mod;
            }
        }
        cout<<profit<<endl;
    }
    return 0;
}
