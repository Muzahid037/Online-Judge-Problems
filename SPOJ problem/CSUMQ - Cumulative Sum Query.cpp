#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll n,x;
    cin>>n;
    ll preSum[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(i==0) preSum[i]=x;
        else preSum[i]=preSum[i-1]+x;
    }
//    for(int i=0; i<n; i++)
//    {
//        cout<<preSum[i]<<" ";
//    }
    int q;
    cin>>q;
    while(q--)
    {
        ll ans,i,j;
        cin>>i>>j;
        if(i==0)
        {
            ans=preSum[j];
        }
        else
        {
            ans=preSum[j]-preSum[i-1];
        }
        cout<<ans<<endl;
    }

    return 0;
}
