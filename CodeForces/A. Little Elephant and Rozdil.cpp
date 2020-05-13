#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
struct abc
{
    int dis;
    int pos;
};

bool cmp(abc x,abc y)
{
    return x.dis<y.dis;
}
int main()
{
    int n;
    cin>>n;
    abc p[n+5];
    for(int i=1; i<=n; i++)
    {
        cin>>p[i].dis;
        p[i].pos=i;
    }
    sort(p+1,p+n+1,cmp);
//    for(int i=1; i<=n; i++)
//    {
//        cout<<p[i].dis<<" "<<p[i].pos<<endl;
//    }
    if(p[1].dis==p[2].dis)
    {
        cout<<"Still Rozdil"<<endl;
    }
    else
    {
        cout<<p[1].pos<<endl;
    }

    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<ll,ll>mp;
int main()
{
    ll n,x;
    cin>>n;
    ll mn=1000000009;
    ll pos;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        mp[x]++;
        mn=min(mn,x);
        if(mn==x)
        {
            pos=i;
        }
    }
    if(mp[mn]>1)
    {
        cout<<"Still Rozdil"<<endl;
    }
    else
    {
        cout<<pos+1<<endl;
    }
    return 0;
}
*/

