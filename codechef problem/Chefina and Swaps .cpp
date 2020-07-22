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
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n;
        vector<ll>a,b;
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            a.pb(x);
        }
        for(ll i=0; i<n; i++)
        {
            cin>>x;
            b.pb(x);
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll idx=0;
        while(a[idx]==b[idx] && idx<n) idx++;
        vector<ll>a1st,a2nd,b1st,b2nd,r;
        for(ll i=idx,j=0; i<n; i++,j++)
        {
            if(j%2==0)
            {
                a1st.pb(a[i]);
                b1st.pb(b[i]);
                r.pb(a[i]);
                r.pb(a[i]);
                r.pb(b[i]);
            }
            else
            {
                a2nd.pb(a[i]);
                b2nd.pb(b[i]);
                //r.pb(min(a[i],b[i]));
            }
        }
        ll a1stSz=a1st.size();
        ll a2ndSz=a2nd.size();
        ll b1stSz=b1st.size();
        ll b2ndSz=b2nd.size();
        if(a1stSz==a2ndSz && b1stSz==b2ndSz && a1st==a2nd &&  b1st==b2nd)
        {
            ll cost=0;
            sort(r.begin(),r.end());
            for(ll i=0; i<a1stSz; i++) cost+=r[i];
            cout<<cost<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }


//        ll diff=n-idx;
//        sort(p.begin(),p.end());
//        sort(q.begin(),q.end());
//        if(p!=q || diff%2==1) cout<<"-1"<<endl;
//        else
//        {
//            ll cost=0;
//            sort(r.begin(),r.end());
//            for(ll i=0; i<diff/2; i++) cost+=r[i];
//            cout<<cost<<endl;
//        }
    }
    return 0;
}
