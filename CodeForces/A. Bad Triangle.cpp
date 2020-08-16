///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    ll n;
    cin>>n;
    ll a[n+5];
    for(ll i=0; i<n; i++) cin>>a[i];
    if(a[0]+a[1]<=a[n-1]) cout<<"1 2 "<<n<<endl;
    else cout<<"-1"<<endl;
}
int main()
{
    int t;
    t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
