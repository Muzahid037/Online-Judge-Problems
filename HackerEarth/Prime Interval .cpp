#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
#define pb push_back
vector<int>primes;
map<int,bool>isPrime;
int i,j;
void sieve(int up)
{
    isPrime[1]=1;
    primes.pb(2);
    for(i=4; i<=up; i+=2) isPrime[i]=1;
    for(i=3; i<=up; i+=2)
    {
        if(isPrime[i]==0)
        {
            primes.pb(i);
            for(j=i*i; j<=up; j+=2*i)
            {
                isPrime[j]=1;
            }
        }
    }
//   int sz=primes.size();
//    cout<<sz<<endl;
//    f0(i,sz)
//    {
//        cout<<primes[i]<<" ";
//    }
}

int main()
{
    int l,r;
    cin>>l>>r;
    if(r>1)
    {
        sieve(r);
        int startIndex=lower_bound(primes.begin(),primes.end(),l)-primes.begin();
        //cout<<startIndex<<endl;
        int sz=primes.size();
        for(int i=startIndex; i<sz; i++)
        {
            if(i<sz-1)
            {
                cout<<primes[i]<<" ";
                continue;
            }
            cout<<primes[i]<<endl;
        }
    }
    return  0;
}
