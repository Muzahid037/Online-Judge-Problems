///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct day
{
    ll a,b;
};
bool cmp(day m,day n)
{
    if(m.a==n.a) return m.b<n.b;
    else return m.a<n.a;
}
void solve()
{
    ll n;
    cin>>n;
    day x[n];
    for(ll i=0;i<n;i++) cin>>x[i].a>>x[i].b;
    sort(x,x+n,cmp);
    ll last=x[0].b;
    for(ll i=1;i<n;i++)
    {
        if(last>x[i].b) last=x[i].a;
        else last=x[i].b;
    }
    cout<<last<<endl;
}
int main()
{
    int t;
    t=1;
    //cin>>t;
    while(t--) solve();
    return 0;
}
