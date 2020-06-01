#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll y,k,n;
    cin>>y>>k>>n;
    ll x=(y/k)+1;
    //cout<<x<<endl;
    if(y>=n || k*x>n)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        while(k*x<=n)
        {
            cout<<((k*x)-y)<<" ";
            x++;
        }
    }
    return 0;
}
