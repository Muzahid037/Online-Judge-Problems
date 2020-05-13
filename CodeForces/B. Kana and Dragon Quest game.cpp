#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,n,m;
        cin>>x>>n>>m;
        while(x>=21 && n>0)
        {
            x=floor((double)x/2)+10;
            n--;
            //cout<<x<<endl;
        }
        x-=(m*10);
        if(x>0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    return 0;
}

