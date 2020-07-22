///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
ll mx=1000005,mark[1000005];
void sieve(vector<ll>&primes)
{
    ll limit=sqrt(mx)+1;
    primes.pb(2);
    for(int i=3; i<=limit; i+=2)
    {
        if(mark[i]==0)
        {
            primes.pb(i);
            for(ll j=i*i; j<=mx; j+=2*i) mark[j]=1;
        }
    }
    limit++;
    if(limit%2==0) limit++;
    for(ll i=limit; i<=mx; i+=2)
    {
        if(mark[i]==0) primes.pb(i);
    }
}

int main()
{
    vector<ll>primes;
    sieve(primes);
    ll t;
    cin>>t;
    for(ll i=1; i<=t; i++)
    {
        ll n,ans=1;
        cin>>n;
        ll nLimit=sqrt(n)+1;
        for(ll i=0; i<primes.size()&&primes[i]<=nLimit; i++)
        {
            //cout<<d[i]<<" ";
            ll cnt=1;
            while(n%primes[i]==0)
            {
                cnt++;
                n/=primes[i];
            }
            nLimit=sqrt(n)+1;
            ans*=cnt;
        }
        if(n>1) ans*=2LL;
        cout<<"Case "<<i<<": "<<ans-1<<endl;
    }
    return 0;
}
