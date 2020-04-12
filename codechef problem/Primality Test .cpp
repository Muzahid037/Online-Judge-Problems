#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int isPrime[1000009];   /// if isPrime[i]==0 >prime
void sieve()
{

    int maxN=1000000;
    isPrime[0]=isPrime[1]=1;   ///0,1 not prime
    for(int i=2; i*i<=maxN; i++)
    {
        if(isPrime[i]==0)   ///if i is prime
        {
            for(int j=i*i; j<=maxN; j+=i) ///make multiple of i (isPrime[j]) 1(not prime)
            {
                isPrime[j]=1;
            }
        }
    }
}

int main()
{
    sieve();

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(isPrime[n]==0)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(int n)
{
    if(n==1){return false;}
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(isPrime(n))
        {
            cout<<"yes"<<endl;
        }
        else
        {
             cout<<"no"<<endl;
        }

    }


    return 0;
}

*/
