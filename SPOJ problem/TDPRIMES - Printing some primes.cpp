#include<bits/stdc++.h>
using namespace std;
int mark[100000008/32];
int prime[100000008],nPrime;

bool check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}
int Set(int N,int pos)
{
    return N=N | (1<<pos);
}

void bitwiseSieve(int n)
{
    int limit=sqrt(n)+1;

    for(int i = 3; i <= limit; i += 2 )
    {
        if( check(mark[i/32],i%32)==0)
        {
            for(int j = i*i; j <= n; j += 2*i )
            {
                mark[j/32]=Set(mark[j/32],j%32);
            }
        }
    }
    prime[nPrime++]=2;
    for(int i=3; i<=n; i+=2)
    {
        if( check(mark[i/32],i%32)==0)
        {
            prime[nPrime++]=i;
        }
    }
}

int main()
{
    bitwiseSieve(100000000);
    for(int i=0; i<nPrime; i+=100)
    {
        if(i==nPrime-1) cout<<prime[i]<<endl;
        else cout<<prime[i]<<" ";
    }

    return 0;
}
