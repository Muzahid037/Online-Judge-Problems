#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll x,mx=0,ans;
    for(ll i=1; i<=n; i++)
    {
        cin>>x;
        ll val=ceil((double)x/(double)m);
        if(val>=mx)
        {
            mx=val;
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll x,pos[100000];
    queue<int>stk;
    for(ll i=1; i<=n; i++)
    {
        cin>>x;
        stk.push(x);
        pos[x]=i;
    }
    ll val,curr;
    while(!stk.empty())
    {
        val=stk.front();
        curr=pos[val];
        stk.pop();
        if(val-m>0)
        {
            val-=m;
            stk.push(val);
        }
        pos[val]=curr;
    }
    cout<<curr<<endl;
    return 0;
}
*/


