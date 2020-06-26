///-----Bismillahir Rahmanir Rahim-----///

#include<bits/stdc++.h>
using namespace std;

///---FAST I/O---///
#define Boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///---DATA TYPE---///
typedef long long ll;
typedef long long int lli;
///vector
typedef vector<int> vi;
typedef vector<ll> vl;
///pair
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;

///---LOOP---///
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)

///---I/O---///
#define sf scanf
#define pf printf

///---OTHERS---///
#define pb push_back
#define MK make_pair
#define F first
#define S second
#define endl '\n'


///---INITIALIZATION---//
#define mem(a,b) memset(a, b, sizeof(a) )

///---CALCULATE---///
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define sqr(a) ((a) * (a))

///---BIT OPERATION---///
inline bool checkBit(ll n, int i)
{
    return n&(1LL<<i);
}
inline ll setBit(ll n, int i)
{
    return n|(1LL<<i);;
}
inline ll resetBit(ll n, int i)
{
    return n&(~(1LL<<i));
}

///---CONSTANT---///
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

int main()
{
    Boost();

    int t;
    t=1;
    //cin>>t;
    while(t--)
    {
        int n,m,d,div=0,cntSame=0,first,ans=INT_MAX;
        cin>>n>>m>>d;
        int a[n+5][m+5];
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
                v.pb(a[i][j]);
                if(i==0 && j==0) first=a[i][j];
                else
                {
                    if(a[i][j]==first) cntSame++;
                }
            }
        }
        int noOfelement=n*m;
        if(cntSame==noOfelement) cout<<"0"<<endl;
        else
        {
            for(int i=0; i<v.size(); i++)
            {
                int cost=0,flag=0;
                for(int j=0; j<v.size(); j++)
                {
                    int tmp=abs(v[i]-v[j]);
                    if(tmp%d==0)
                    {
                        tmp/=d;
                        cost+=tmp;
                    }
                    else
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    ans=min(ans,cost);
                }
            }
            if(ans==INT_MAX) cout<<"-1"<<endl;
            else cout<<ans<<endl;
        }
    }
    return 0;
}

