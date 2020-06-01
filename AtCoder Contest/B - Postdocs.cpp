
#include<bits/stdc++.h>
using namespace std;

///---OPTIMIZE---///
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);

///---DATA TYPE---///
typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;
typedef map<int,int> mpii;
typedef pair<int,int> pii;

///---INPUT---///
#define sf                        scanf
#define ss(ch)                    scanf("%s",ch)

#define sfi(a)                    sf("%d",&a)
#define sfii(a,b)                 sf("%d %d",&a,&b)
#define sfiii(a,b,c)              sf("%d %d %d",&a,&b,&c)

#define sfl(a)                    sf("%ll",&a)
#define sfll(a,b)                 sf("%ll %ll",&a,&b)
#define sflll(a,b,c)              sf("%ll %ll %ll",&a,&b,&c)

#define sflli(a)                  sf("%lld",&a)

///---OUTPUT---///
#define pf                        printf
#define pfi(a)                    pf("%d\n",a)
#define pfii(a,b)                 pf("%d %d\n",a,b)
#define pfiii(a,b,c)              pf("%d %d %d\n",a,b,c)
#define pfl(a)                    pf("%ll\n",a)
#define pfll(a,b)                 pf("%ll %ll\n",a,b)
#define pflll(a,b,c)              pf("%ll %ll %ll\n",a,b,c)

#define pflli(a)                  pf("%lld",&a)

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



int i,j,k;

int main()
{
    BOOST

    int t;
    //cin>>t;
    t=1;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.size();
        string s1="";
        for(int i=0; i<len;i++)
        {
            if(s[i]=='?') s1+="D";
            else s1+=s[i];
        }
        cout<<s1<<endl;
    }
    return  0;
}
