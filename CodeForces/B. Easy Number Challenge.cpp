#include<bits/stdc++.h>
using namespace std;

///---INPUT---///
#define sf                        scanf
#define ss(ch)                    scanf("%s",ch)
#define sfi(a)                    sf("%d",&a)
#define sfii(a,b)                 sf("%d %d",&a,&b)
#define sfiii(a,b,c)              sf("%d %d %d",&a,&b,&c)
#define sfl(a)                    sf("%ll",&a)
#define sfll(a,b)                 sf("%ll %ll",&a,&b)
#define sflll(a,b,c)              sf("%ll %ll %ll",&a,&b,&c)

///---OUTPUT---///
#define pf                        printf
#define pfi(a)                    pf("%d\n",a)
#define pfii(a,b)                 pf("%d %d\n",a,b)
#define pfiii(a,b,c)              pf("%d %d %d\n",a,b,c)
#define pfl(a)                    pf("%ll\n",a)
#define pfll(a,b)                 pf("%ll %ll\n",a,b)
#define pflll(a,b,c)              pf("%ll %ll %ll\n",a,b,c)

///---NEWLINE---///
#define nlc                       pf("\n")
#define nlcpp                     cout<<"\n"

///---LOOP---///
#define rep0(ini,end)             for(ini=0;ini<end;ini++)
#define rep1(ini,end)             for(ini=1;ini<=end;ini++)
#define rep(ini,start,end)        for(ini=start;ini<=end;ini++)
#define repinc(ini,start,end,inc) for(ini=start;ini<=end;ini+=inc)

///---VECTOR---///
#define v                         vector
#define vi(a)                     v<int>a
#define pb                        push_back

///---DATA TYPE---///
typedef long long ll;
typedef vector<int> vi;
typedef map<int,int> mpii;
typedef pair<int,int> pii;


int i,j,k;
int d[1000005];
void findDiv(int mx)
{
    int lim=(mx*mx*mx)+1;
    rep1(i,lim)
    {
        repinc(j,i,lim,i)
        {
            d[j]++;
        }
    }
}

int main()
{
    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int mx=max(max(a,b),c);
        findDiv(mx);
        ll ans=0;
        rep1(i,a)
        {
            rep1(j,b)
            {
                rep1(k,c)
                {
                    int tmp=i*j*k;
                    ans=(ans+d[tmp])%(1<<30);
                }
            }
        }
        cout<<ans<<endl;
    }
    return  0;
}
