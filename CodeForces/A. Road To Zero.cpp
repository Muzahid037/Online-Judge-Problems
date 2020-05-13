#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,a,b;
        cin>>x>>y>>a>>b;
        ll high=max(x,y);
        ll low=min(x,y);
        ll p=high-low;
        ll ans1=low*b+p*a;
        ll ans2=min(ans1,(low*a+high*a));
        ll ans3=min(ans2,(p*a+high*b));
        cout<<ans3<<endl;
    }
    return 0;
}

/*
 ll p=high-low;
        ll ans1=p*a+low*b;
        ll ans2=min(ans1,(p*b+low*a));
        ll ans3=min(ans2,(low*a+high*a));
        ll ans4=min(ans3,(p*a+high*b));


        */
