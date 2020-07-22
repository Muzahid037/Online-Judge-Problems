///-----Bismillahir Rahmanir Rahim-----///

#include<bits/stdc++.h>
using namespace std;

///---FAST I/O---///
#define Boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

///---DATA TYPE---///
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

///---LOOP---///
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)

///---I/O---///
#define sf scanf
#define pf printf

///---OTHERS---///
#define pb push_back
#define all(c)		c.begin(),c.end()
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

///------String/Char Related Functions-----///
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

///------------Sorting STL----------///
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
        int h,w,k,ans=0;
        cin>>h>>w>>k;
        char c[h+5][w+5];
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++) cin>>c[i][j];
        }
        for(int maskh=0; maskh<(1 << h); maskh++)
        {
            for(int maskw=0; maskw<(1 << w); maskw++)
            {

                int cntBlack=0;
                for(int i=0; i<h; i++)
                {
                    for(int j=0; j<w; j++)
                    {
                        /// if( ((maskh >> i) & 1)==0 && ((maskw >> j) & 1)==0 && c[i][j]=='#' ){ cntBlack++; }
                        ///If we right shift n by k-1, we get last bit as 1 if k-th bit is set else 0.

                        if( (maskh & (1<<i))==0 && (maskw & (1<<j))==0 && c[i][j]=='#' ) cntBlack++;
                        ///Left shift given number 1 by k-1 to create a number that has only set bit as k-th bit.
                        ///temp = 1 << (k-1)
                        ///If bitwise AND of n and temp is non-zero,then result is SET else result is NOT SET.

                        }
                }
                //cout<<cntBlack<<endl;
                if(cntBlack==k) ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
