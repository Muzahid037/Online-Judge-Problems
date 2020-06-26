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

///---CONSTANT---///
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

int main()
{
    //Boost();

    int t;
    t=1;
    cin>>t;
    while(t--)
    {
        ll n,k,cnt=0,sum=0;
        cin>>n>>k;
        ll a[n+5],w[k+5],p[n+5];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        reverse(a,a+n);

        for(ll i=0; i<k; i++)
        {
            cin>>w[i];
            if(w[i]==1)
            {
                cnt++;
            }
        }
        sort(w,w+k);

        for(ll i=0; i<k; i++)
        {
            sum+=a[i];
            if(i<cnt)
            {
                sum+=a[i];
            }
        }
        //cout<<sum<<endl;
        ll lowestNumIndex=k-1;
        //cout<<idx<<endl;
        for(ll i=0; i<k; i++)
        {
            if(w[i]==1) continue;
            lowestNumIndex +=(w[i]-1);
            sum += a[lowestNumIndex];
        }
        cout<<sum<<endl;
    }
    return 0;
}
