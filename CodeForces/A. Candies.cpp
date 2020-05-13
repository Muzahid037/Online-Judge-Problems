#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod= 1000000007;
ll mx=1000000001;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
      ll st=3;
      while(1)
      {
          if(n%st==0)
          {
              cout<<n/st<<endl;
              break;
          }
          st=(st*2)+1;
          //cout<<st<<" ";
      }
    }

    return 0;
}
