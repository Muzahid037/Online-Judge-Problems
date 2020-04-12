#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,t;
    cin>>n>>t;
    ll a[n+10];
    ll b[n+10];
    b[0]=0;
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll sum=0,cnt=0,mx=0,idx;
    for(ll i=0,j=0; i<n; i++)
    {
        while(sum+a[j]<=t)
        {
            sum+=a[j];
            j++;
            cnt++;
        }
        mx=max(mx,cnt);
        sum-=a[i];
        cnt--;
    }
    cout<<mx<<endl;
    return 0;
}
