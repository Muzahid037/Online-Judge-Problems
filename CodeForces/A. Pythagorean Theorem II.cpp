#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
        ll n;
        cin>>n;
        ll cnt=0;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=i+1;j<=n;j++)
            {
                ll c=sqrt(i*i+j*j);
                if(c<=n && c*c==(i*i+j*j)){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    return  0;
}

