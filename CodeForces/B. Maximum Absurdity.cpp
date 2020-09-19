#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll x[n+5];
    x[0]=0;
    for(ll i=1; i<=n; i++)
    {
        cin>>x[i];
        x[i]+=x[i-1];
    }
    vector<ll>pSum;
    for(ll i=k,j=0; i<=n; i++,j++)
    {
        pSum.push_back(x[i]-x[j]);
    }
//    for(ll i=0; i<pSum.size(); i++)
//    {
//        if(i==pSum.size()-1)  cout<<pSum[i]<<endl;
//        else cout<<pSum[i]<<" ";
//    }
    ll fMax=0,fsMax=0,tmp,fIdx,sIdx;
    for(ll i=0,j=k; j<pSum.size(); i++,j++)
    {
        if(pSum[i]>fMax)
        {
            fMax=pSum[i];
            tmp=i;
        }
        if(fMax+pSum[j]>fsMax)
        {
            fsMax=fMax+pSum[j];
            fIdx=tmp;
            sIdx=j;
        }
    }
    cout<<fIdx+1<<" "<<sIdx+1<<endl;

    return 0;
}
