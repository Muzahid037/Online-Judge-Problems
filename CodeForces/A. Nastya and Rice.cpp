#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        ll glow=a-b;
        ll ghigh=a+b;
        ll plow=c-d;
        ll phigh=c+d;
        ll low=n*glow;
        ll high=n*ghigh;
        if( (high<plow) || (low>phigh) )
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}

