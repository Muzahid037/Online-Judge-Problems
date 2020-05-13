#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n;
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll mid=n/2;
        if(n%2==1)
        {
            cout<<v[mid]<<" ";
        }
        mid--;
        for(ll i=mid; i>=0; i--)
        {
            cout<<v[i]<<" "<<v[n-1-i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


