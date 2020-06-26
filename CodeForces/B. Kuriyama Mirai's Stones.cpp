#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    BOOST
    ll n;
    cin>>n;
    ll unsorted[n+10],sorted[n+10];
    unsorted[0]=sorted[0]=0;
    for(ll i=1; i<=n; i++)
    {
        cin>>unsorted[i];
        sorted[i]=unsorted[i];
        unsorted[i]+=unsorted[i-1];
    }
    sort(sorted+1,sorted+1+n);
    for(ll i=1; i<=n; i++) sorted[i]+=sorted[i-1];
    int m;
    cin>>m;
    while(m--)
    {
        ll type,l,r;
        cin>>type>>l>>r;
        if(type==1) cout<<unsorted[r]-unsorted[l-1]<<endl;
        else cout<<sorted[r]-sorted[l-1]<<endl;
    }
    return 0;
}
