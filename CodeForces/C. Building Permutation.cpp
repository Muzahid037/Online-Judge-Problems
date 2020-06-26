#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,ans=0;
    cin>>n;
    ll a[n+5],mx=n;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    reverse(a,a+n);
    for(ll i=0; i<n; i++)
    {
        ans+=(abs(mx-a[i]));
        mx--;
    }
    cout<<ans<<endl;
    return 0;
}
