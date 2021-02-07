///"--------------------Bismillahir Rahmanir Rahim"-----------------------///

#include<bits/stdc++.h>
using namespace std;

///_____________________________FAST I/O__________________________________///
#define Boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
///-----------------------------------------------------------------------///

///_____________________________DATA TYPE_________________________________///
typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;
///-----------------------------------------------------------------------///

///_______________________________LOOP____________________________________///
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
///-----------------------------------------------------------------------///

///_________________________________I/O___________________________________///
#define sf scanf
#define pf printf
///-----------------------------------------------------------------------///

///_________________________________OTHERS________________________________///
#define pb push_back
#define all(c)		c.begin(),c.end()
#define MK make_pair
#define F first
#define S second
#define endl '\n'
///-----------------------------------------------------------------------///

///____________________________INITIALIZATION_____________________________///
#define mem(a,b) memset(a, b, sizeof(a) )
///-----------------------------------------------------------------------///

///____________________________CALCULATE__________________________________///
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define sqr(a) ((a) * (a))
///-----------------------------------------------------------------------///

///_____________________________BIT OPERATION____________________________///
bool checkBit(int N,int pos)
{
    return (bool)(N & (1<<pos));
}

int setBit(int N,int pos)
{
    return N=N | (1<<pos);
}
inline ll resetBit(ll n, int i)
{
    return n&(~(1LL<<i));
}
///-----------------------------------------------------------------------///

///________________________String/Char Related Functions__________________///
string makeintString(int x)
{
    stringstream ss;
    ss << x;
    string str = ss.str();
    ///cout<<str<<endl;
    return str;
}
string makellString(ll x)
{
    stringstream ss;
    ss << x;
    string str = ss.str();
    ///cout<<str<<endl;
    return str;
}
char cpp(char c)
{
    return static_cast<char>(c + 1);
}
///-----------------------------------------------------------------------///

///__________________________Sorting STL_________________________________///
struct func
{
    //this is a sample overloading function for sorting stl
    bool operator()(pii const &a, pii const &b)
    {
        if(a.F==b.F)
            return (a.S<b.S);
        return (a.F<b.F);
    }
};
///-----------------------------------------------------------------------///

///____________________________CONSTANT___________________________________///
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
#define MX 100005
///-----------------------------------------------------------------------///


//___________________prime number generator using bitwise sieve________________///
int status[(MX/32)+2];
vector<int>primes;
void sieve()
{
    int i, j, sqrtN;
    sqrtN = int( sqrt( MX ) );
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( checkBit(status[i>>5],i&31)==0)
        {
            for( j = i*i; j <= MX; j += (i<<1) )
            {
                status[j>>5]=setBit(status[j>>5],j & 31)   ;
            }
        }
    }

    primes.pb(2);
    for(i=3; i<=MX; i+=2)
    {
        if( checkBit(status[i>>5],i&31)==0) primes.pb(i);
    }
}
///-------------------------------------------------------------------------------///

void solve()
{
    ll n,sum=0;
    cin>>n;
    ll a[n+5];
    for(ll i=1; i<=n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(ll len=n; len>=1; len--)
    {
        if(sum%len==0)
        {
            ll targetEqlVal=sum/len,makeEqlVal=0,cnt=0;
            for(ll i=1; i<=n; i++)
            {
                makeEqlVal+=a[i];
                if(makeEqlVal==targetEqlVal)
                {
                    makeEqlVal=0;
                    cnt++;
                }
            }
            if(cnt==len)
            {
                cout<<n-len<<endl;
                return;
            }
        }
    }

    ///----------------prev sol-----------------////
    /*
    ll n,sum=0,mx=0,f=0;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        mx=max(mx,a[i]);
    }
    ll ans=n;
    for(ll i=mx; i<=sum; i++)
    {
        if(sum%i==0)
        {
            vector<ll>b;
            b=a;
            ll flag=0,cnt=0;
            while(b.size()>1)
            {
                if(b[b.size()-1]==i)
                {
                    b.pop_back();
                    continue;
                }
                else if(b[b.size()-1]<i)
                {
                    int x=b[b.size()-2]+b[b.size()-1];
                    b.pop_back();
                    b.pop_back();
                    b.push_back(x);
                    cnt++;
                }
                else if(b[b.size()-1]>i)
                {
                    flag=1;
                    break;
                }
            }
            //cout<<cnt<<endl;
            for(int k=0; k<b.size(); k++)
            {
                if(i!=b[k])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                ans=min(ans,cnt);
            }
        }
    }
    cout<<ans<<endl;
    */
    ///-----prev sol---------///

}
int main()
{
    //Boost();

    int t;
    t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
