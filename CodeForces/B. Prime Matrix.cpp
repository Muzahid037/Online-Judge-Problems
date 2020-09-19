///"--------------------Bismillahir Rahmanir Rahim"-----------------------///
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mx 100005

int status[(mx/32)+2];
vector<int>primes;
bool Check(int N,int pos)
{
    return (bool)(N & (1<<pos));
}

int Set(int N,int pos)
{
    return N=N | (1<<pos);
}
void sieve()
{
    int i, j, sqrtN;
    sqrtN = int( sqrt( mx ) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( Check(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= mx; j += (i<<1) )
            {
                status[j>>5]=Set(status[j>>5],j & 31)   ;
            }
        }
    }

    primes.pb(2);
    for(i=3; i<=mx; i+=2)
    {
        if( Check(status[i>>5],i&31)==0) primes.pb(i);
    }
}

int main()
{
    sieve();
    /*
    for(int i=0;i<primes.size();i++)
    {
       cout<<primes[i]<<" ";
    }
    */

    sort(primes.begin(),primes.end());
    int n,m;
    cin>>n>>m;
    int nm[n+5][m+5];
    int pnm[n+5][m+5];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>nm[i][j];
            vector<int>::iterator it=lower_bound(primes.begin(),primes.end(),nm[i][j]);
            pnm[i][j]=*it;
        }
    }
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<m; j++)
//        {
//            cout<<pnm[i][j]<<" ";
//        }
//        cout<<endl;
//    }

    int ans=mx,tmp;
    for(int i=0; i<n; i++)
    {
        tmp=0;
        for(int j=0; j<m; j++)
        {
            tmp+=(pnm[i][j]-nm[i][j]);
        }
        ans=min(ans,tmp);
    }

    for(int i=0; i<m; i++)
    {
        tmp=0;
        for(int j=0; j<n; j++)
        {
            tmp+=(pnm[j][i]-nm[j][i]);
        }
        ans=min(ans,tmp);
    }
    cout<<ans<<endl;

    return 0;
}
