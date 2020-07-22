
///"--------------------Bismillahir Rahmanir Rahim"-----------------------///

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,a,b,ans=-1;
        cin>>n>>m;
        map<ll,ll>cnta;
        for(ll i=0; i<n; i++)
        {
            cin>>a;
            cnta[a]=1;
        }
        for(ll i=0; i<m; i++)
        {
            cin>>b;
            if(cnta[b]==1 && ans==-1) ans=b;
        }
        if(ans==-1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl<<"1 "<<ans<<endl;
        cnta.clear();
    }
    return 0;
}

