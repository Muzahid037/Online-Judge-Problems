#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int isPrime[1500000];     /// 0==prime , 1==not prime
vector<int>primes;
void sieve(int MX)
{
    ll limit=sqrt(MX);
    isPrime[1]=1;
    primes.push_back(2);
    for(int i=4; i<=MX; i+=2) isPrime[i]=1;
    for(int i=3; i<=MX; i+=2)
    {
        if(isPrime[i]==0)
        {
            primes.push_back(i);
            if(i<=limit)
            {
                for(int j=i*i; j<=MX; j+=i*2)
                {
                    isPrime[j]=1;
                }
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    sieve(n*13);
    //cout<<primes.size();
    for(int i=0; i<n; i++)
    {
        cout<<primes[i]<<" ";
    }
    cout<<endl;
    return 0;
}
