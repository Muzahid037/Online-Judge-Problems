#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

map<ll,int>mp;

int main()
{
    mp[1]=1;
    mp[2]=1;
    int j=3;
    for(ll i=4; i<10000000000; i+=(j++))
    {
        mp[i]=true;
    }
    ll n;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        ll k;
        cin>>k;
        cout<<mp[k]<<" ";
    }
    cout<<endl;

    return 0;
}

