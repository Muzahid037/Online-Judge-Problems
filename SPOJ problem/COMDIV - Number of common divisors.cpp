#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

///---INPUT---///
#define sf                      scanf
#define sfi(a)                  sf("%d",&a)
#define sfii(a,b)               sf("%d%d",&a,&b)
#define sfiii(a,b,c)            sf("%d%d%d",&a,&b,&c)
#define sfl(a)                  sf("%ll",&a)
#define sfll(a,b)               sf("%ll%ll",&a,&b)
#define sflll(a,b,c)            sf("%ll%ll%ll",&a,&b,&c)

///---OUTPUT---///
#define pf                      printf
#define pfi(a)                  pf("%d\n",a)
#define pfii(a,b)               pf("%d %d\n",a,b)
#define pfiii(a,b,c)            pf("%d %d %d\n",a,b,c)
#define pfl(a)                  pf("%ll\n",a)
#define pfll(a,b)               pf("%ll %ll\n",a,b)
#define pflll(a,b,c)            pf("%ll %ll %ll\n",a,b,c)

///---NEWLINE---///
#define nlc                     pf("\n")
#define nlcpp                   cout<<"\n"

///---LOOP---///
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)

///---VECTOR---///
#define v                       vector
#define vi(a)                   v<int>a
#define pb                      push_back


int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int countDivisors(int num)
{
    int lim=sqrt(num);
    int ans=0;
    for(int i=1; i<=lim; i++)
    {
        if(i*i==num)
        {
            ans+=1;
        }
        else if(num%i==0)
        {

            ans+=2;
        }
    }
    return ans;
}
int main()
{
    int t;
    sfi(t);
    while(t--)
    {
        int a,b;
        sfii(a,b);
        int num=gcd(a,b);
        int ans=countDivisors(num);
        pfi(ans);
    }
    return 0;
}

///---------Not accepted! Only for self interest----------///

/*

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

///---INPUT---///
#define sf                      scanf
#define sfi(a)                  sf("%d",&a)
#define sfii(a,b)               sf("%d%d",&a,&b)
#define sfiii(a,b,c)            sf("%d%d%d",&a,&b,&c)
#define sfl(a)                  sf("%ll",&a)
#define sfll(a,b)               sf("%ll%ll",&a,&b)
#define sflll(a,b,c)            sf("%ll%ll%ll",&a,&b,&c)

///---OUTPUT---///
#define pf                      printf
#define pfi(a)                  pf("%d\n",a)
#define pfii(a,b)               pf("%d %d\n",a,b)
#define pfiii(a,b,c)            pf("%d %d %d\n",a,b,c)
#define pfl(a)                  pf("%ll\n",a)
#define pfll(a,b)               pf("%ll %ll\n",a,b)
#define pflll(a,b,c)            pf("%ll %ll %ll\n",a,b,c)

///---NEWLINE---///
#define nlc                     pf("\n")
#define nlcpp                   cout<<"\n"

///---LOOP---///
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)

///---VECTOR---///
#define v                       vector
#define vi(a)                   v<int>a
#define pb                      push_back



vector<int>pfn;
int num,lowestPrimeDiv[1000009];

void sieveForFindLowestPrimeFact()
{
    lowestPrimeDiv[1]=1;

    for(int i=2; i<=num; i+=2) lowestPrimeDiv[i]=2;

    for(int i=3; i<=num; i+=2)
    {
        if(lowestPrimeDiv[i]==0)
        {
            for(int j=i; j<=num; j+=2*i)
            {
                if(lowestPrimeDiv[j]==0)
                {
                    lowestPrimeDiv[j]=i;
                }
            }
        }
    }
}
///-------------------------///
void calculatePrimeFactorsOfANum()
{
    while(lowestPrimeDiv[num]!=1)
    {

        pfn.push_back(lowestPrimeDiv[num]);
        num/=lowestPrimeDiv[num];
    }
}
///-------------------------///
int countDivisorsOfANum()
{
    sort(pfn.begin(),pfn.end());
    int sz=pfn.size();
    int tmp=pfn[0];
    int cnt=1,ans=1;
    for(int i=1; i<sz; i++)
    {
        if(tmp==pfn[i]) cnt++;
        else
        {
            ans*=(cnt+1);
            tmp=pfn[i];
            cnt=1;
        }
    }
    ans*=(cnt+1);
    return ans;
}
int main()
{
    int t;
    sfi(t);
    while(t--)
    {
        int a,b;
        sfii(a,b);
        num=__gcd(a,b);
        sieveForFindLowestPrimeFact();
        calculatePrimeFactorsOfANum();
        int x=countDivisorsOfANum();
        pfi(x);
        pfn.clear();
    }
    return 0;
}

*/
