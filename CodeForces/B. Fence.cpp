#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[(ll)2e5],mn=(ll)1e15;
int main()
{
    ll n,k,x,start;
    cin>>n>>k;
    for(ll i=1; i<=n; i++)
    {
        cin>>dp[i];
        dp[i]+=dp[i-1];
    }
    for(ll i=k; i<=n; i++)
    {
        if(mn>(dp[i]-dp[i-k]))
        {
            mn=dp[i]-dp[i-k];
            start=i-k+1;
        }
    }
    cout<<start<<endl;
    return 0;
}
