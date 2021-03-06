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
        int n,cnt4=0,cnt3=0,cnt2=0,cnt1=0;
        cin>>n;
        vector<int>s(n);
        for(auto it:s)
        {
            cin>>it;
            if(it==4) cnt4++;
            else if(it==3) cnt3++;
            else if(it==2) cnt2++;
            else cnt1++;
        }
        int ans=cnt4; /// 4

        cnt4=min(cnt3,cnt1); /// 3 1
        ans+=cnt4;
        cnt3-=cnt4;
        cnt1-=cnt4;

        cnt4=cnt2/2;   /// 2 2
        ans+=cnt4;
        cnt2=cnt2%2;

        if(cnt2!=0 && cnt1>1) /// 2 1 1
        {
            ans++;
            cnt2--;
            cnt1-=2;
        }
        cnt4=cnt1/4; /// 1 1 1 1
        ans+=cnt4;
        cnt1=cnt1%4;

        if(cnt3!=0) ans+=cnt3; /// 3/3 3/3 3 3..........
        if(cnt2!=0 || cnt1!=0) ans++; /// 1/1 1/1 1 1/2 1/2
        cout<<ans<<endl;

    }
    return 0;
}


/*

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x,cnt1=0,cnt2=0,cnt3=0,cnt4=0,tx;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x==1)
        {
            cnt1++;
        }
        if(x==2)
        {
            cnt2++;
        }
        if(x==3)
        {
            cnt3++;
        }
        if(x==4)
        {
            cnt4++;
        }
    }
    tx=cnt4+cnt3+cnt2/2;
    cnt2%=2;
    cnt1-=cnt3;

    if(cnt2==1)
    {
        tx++;
        cnt1-=2;
    }
    if(cnt1>0)
    {
        tx+=cnt1/4;
        cnt1%=4;
        if(cnt1!=0)
        {
            tx++;
            cnt1=0;
        }
    }

    cout<<tx<<endl;


    return 0;
}

*/
