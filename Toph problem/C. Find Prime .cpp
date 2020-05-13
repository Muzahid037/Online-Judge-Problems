#include<bits/stdc++.h>
using namespace std;
int mx=505;
vector<int>primes;
bool notPrime[505];
void sieve()
{
    notPrime[1]=true;
    primes.push_back(2);
    for(int i=4; i<=mx; i+=2)
    {
        notPrime[i]=true;
    }
    int limit=sqrt(mx+1);
    for(int i=3; i<=limit; i+=2)
    {
        if(notPrime[i]==false)
        {
            primes.push_back(i);
            for(int j=i*i; j<=mx; j+=i)
            {
                notPrime[j]=true;
            }

        }
    }
    for(int i=limit+1; i<=mx; i++)
    {
        if(notPrime[i]==false)
        {
            primes.push_back(i);
        }
    }

}

int main()
{
    int t;
    cin>>t;

    sieve();

    while(t--)
    {
        int n;
        cin>>n;

//        for(vector<int>::iterator it=primes.begin(); it!=primes.end(); it++)
//        {
//            cout<<*it<<" ";
//        }
        int low=lower_bound(primes.begin(),primes.end(),n)-primes.begin();
        int up=upper_bound(primes.begin(),primes.end(),n)-primes.begin();

        cout<<primes[low-1]<<" "<<primes[up]<<endl;

    }


    return 0;
}
