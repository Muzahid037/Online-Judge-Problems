#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
      int k,x,n=1;
      cin>>k;
      while(k--)
      {
          cin>>x;
          n*=x;
      }
      double ans=n;
      cout<<fixed<<setprecision(6)<<(ans/6)<<endl;
    }
    return 0;
}
