#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll h;
    cin>>h;

    ll ans=0;
    ll cnt=1;
    while(h>0)
    {
        if(h==1)
        {
            ans+=cnt;
            h=0;
        }
        else
        {
            ans+=cnt;
            cnt*=2;
            h=h/2;
        }
    }

    cout<<ans<<endl;

    return 0;
}
