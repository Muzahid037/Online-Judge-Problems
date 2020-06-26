///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define sf scanf
#define pf printf
#define pb push_back
#define F first
#define S second
#define MX 1000000
map<ll,ll>isTprime;
ll isPrime[MX+5];
void ho()
{
    isPrime[0]=1;
    isPrime[1]=1;
    isTprime[4]=1;
    for(ll i=4;i<=MX;i+=2) isPrime[i]=1;
    for(ll i=3; i<=MX; i+=2)
    {
        if(isPrime[i]==0)
        {
            isTprime[i*i]=1;
            for(ll j=i*i; j<=MX; j+=2*i)
            {
                isPrime[j]=1;
            }
        }
    }
}
int main()
{
    BOOST
    ho();
    int t;
    t=1;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(isTprime[n]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

///--------------------------------------------------///
/*

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
*/
