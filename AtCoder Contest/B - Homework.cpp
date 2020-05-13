#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
ll n,m;
cin>>n>>m;
ll x,sum=0;
for(ll i=0;i<m;i++)
{
    cin>>x;
    sum+=x;
}
sum=n-sum;
if(sum<0)
{
    cout<<"-1"<<endl;
}
else
{
    cout<<sum<<endl;
}
  return 0;
}

