///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m,t,op,add=0,v,x,y,q;
    cin>>n>>m;
    vector<ll>a(n+5,0);
    map<ll,ll>sub;
    for(ll i=1; i<=n; i++) cin>>a[i];
    for(ll i=1; i<=m; i++)
    {
        cin>>t;
        if(t==1)
        {
            cin>>v>>x;
            a[v]=x;
            sub[v]=add;
            //cout<<v<<"v~a[v]"<<a[v]<<endl;
        }
        else if(t==2)
        {
            cin>>y;
            add+=y;
        }
        else
        {
            cin>>q;
            a[q]=(a[q]+add)-sub[q];
            cout<<a[q]<<endl;
            sub[q]+=(add-sub[q]);
        }
    }
    sub.clear();
    return 0;
}
