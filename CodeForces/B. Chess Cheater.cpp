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
    int n,k,f=0,cntW=0,ans=0,cur=0;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int>seg;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='W')
        {
            if(cur>0)
            {
                seg.pb(cur);
                cur=0;
            }
            cntW++;
            ans++;
            if(f==1) ans++;
            f=1;
        }
        else
        {
            f=0;
            if(cntW>0) cur++;
        }
    }
    if(!cntW)
    {
        cout<<max(2*k-1,0)<<endl;
        return;
    }
    k=min(k,n-cntW);
    ans+=2*k;

    sort(seg.begin(),seg.end());

    for(int i=0; i<seg.size(); i++)
    {
        if(seg[i]<=k)
        {
            ans++;
            k-=seg[i];
        }
        else break;
    }
    cout<<ans<<endl;

}
int main()
{
    Boost();

    int t;
    t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
