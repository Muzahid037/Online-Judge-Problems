#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a,ll b)
{
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return gcd(b,a%b);
    }
}

int main()
{
    while(1)
    {
        ll n,z=0;
        cin>>n;
        if(n==0)
        {
            return 0;
        }
        for(ll i=1; i<n; i++)
        {
            for(ll j=i+1; j<=n; j++)
            {
                z+=gcd(i,j);
            }
        }
        cout<<z<<endl;
    }

    return 0;
}
