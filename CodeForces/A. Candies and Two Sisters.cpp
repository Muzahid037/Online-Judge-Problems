#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        ll ans=ceil((double)n/2);
        ans--;
        cout<<ans<<endl;
    }

    return 0;
}

