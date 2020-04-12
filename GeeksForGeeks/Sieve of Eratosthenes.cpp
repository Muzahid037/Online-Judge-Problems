///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;


void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int i=2; i*i<=n; i++)
    {
        if (prime[i] == true)
        {
            for (int j=i*i; j<=n; j += i)
               {
             prime[j] = false;
               }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(prime[i]==true)
        {
            cout<<i<<" ";
        }
    }
    cout<<"\n";

}

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {

        int x;
        cin>>x;
         SieveOfEratosthenes(x);
    }

 return 0;
}
