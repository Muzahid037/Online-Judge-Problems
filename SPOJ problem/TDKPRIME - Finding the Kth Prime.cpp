#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPrime[86028121];   /// if isPrime[i]==0 >prime
vector<int>prime;
void sieve()
{

    int maxN=86028121;
    isPrime[0]=isPrime[1]=true;   ///0,1 not prime
   int limit=sqrt(maxN)+1;
    for(int i=2; i<=limit; i++)      ///loop of check
    {
        if(isPrime[i]==false)   ///if i is prime
        {
            prime.push_back(i);  ///loop of i is 2 to sqrt(maxN)
            for(int j=i*i; j<=maxN; j+=i) ///make multiple of i (isPrime[j]) 1(not prime)
            {
                isPrime[j]=true;
            }
        }
    }
    int stidx=sqrt(maxN);  ///starts where loop of loop of check ends=sqrt(maxN)
    for(int i=stidx; i<=maxN; i++)
    {
        if(isPrime[i]==false)
        {
            prime.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<prime[n-1]<<endl;
    }
    return 0;
}

