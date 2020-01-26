#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll x[200005];

int main()
{
ll n,k;
cin>>n>>k;

for(ll i=0;i<n;i++)
{
    cin>>x[i];
}
sort(x,x+n);
reverse(x,x+n);

ll ans=0;
for(ll i=k;i<n;i++)
{
    ans+=x[i];
}
cout<<ans<<endl;


    return 0;
}

