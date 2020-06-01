#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        ll oddx,evy,evx,oddy;
        oddx=(x*(2+(x-1)*2))/2;
        evy=(y*(4+(y-1)*2))/2;
        //cout<<oddx<<" "<<evy<<endl;
        oddy=(y*(2+(y-1)*2))/2;
        evx=(x*(4+(x-1)*2))/2;
        //cout<<oddy<<" "<<evx<<endl;
        cout<<min(abs(oddx-evy),abs(oddy-evx))<<endl;
    }
    return 0;
}
