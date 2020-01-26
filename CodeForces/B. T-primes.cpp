///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

bool prime[1000005];

map<long long int,long long int>tpr;

void tprime()
{
memset(prime,true,sizeof(prime));

    for(long long int i=2; i<=1000000; i++)
    {
        if(prime[i]==true)
        {
            for(long long int j=i*i; j<=1000000; j+=i)
            {
                prime[j]=false;
            }
            tpr[i*i]=1;
        }
    }
}

int main()
{
    tprime();

    long long int n;
    cin>>n;
    for(long long int j=0; j<n; j++)
    {
        long long int x;
        cin>>x;

        if(tpr[x]==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
