///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,w,h,mx=0;
    cin>>n;
    vector<ll>a(n+5,0);
    for(ll i=0; i<n; i++) cin>>a[i];
    cin>>m;
    for(ll i=0; i<m; i++)
    {
        cin>>w>>h;
        mx=max(a[w-1],mx);
        cout<<mx<<endl;
        mx=mx+h;
    }
    return 0;
}
