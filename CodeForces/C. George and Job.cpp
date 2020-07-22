#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=5500LL;
ll sum[N],d[N],dp[N][N];
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    for(ll i=1LL; i<=n; i++)
    {
        ll num;
        cin>>num;
        sum[i]=sum[i-1]+num;
    }
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=k; j++)
        {
            if(i>=m)
            {
//                cout<<dp[i-1][j]<<" "<<dp[i-m][j-1]<<" "<<sum[i]-sum[i-m]<<endl;
//                cout<<"age dp[i][j]: "<<dp[i][j]<<endl;
                dp[i][j]=max(dp[i-1][j],dp[i-m][j-1]+sum[i]-sum[i-m]);
//                cout<<"pore dp[i][j]: "<<dp[i][j]<<endl;
//                cout<<"--------------------------------"<<endl;
            }
        }
    }
    cout<<dp[n][k]<<endl;
    return 0;
}

///idea/hints: https://www.programmersought.com/article/10554519090/
