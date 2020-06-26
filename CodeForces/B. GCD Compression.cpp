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
inline bool checkBit(ll n, int i) { return n&(1LL<<i); }
inline ll setBit(ll n, int i) { return n|(1LL<<i);; }
inline ll resetBit(ll n, int i) { return n&(~(1LL<<i)); }

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
       int n,a;
       cin>>n;
       vector<int>ev,od;
       for(int i=0;i<2*n;i++)
       {
          cin>>a;
          if(a%2==0) ev.pb(i+1);
          else od.pb(i+1);
       }
       int cnt=0;
       while(ev.size()>1 && cnt<n-1)
       {
           cout<<ev[ev.size()-1]<<" "<<ev[ev.size()-2]<<endl;
           cnt++;
           ev.pop_back();
           ev.pop_back();
       }
       while(od.size()>1 && cnt<n-1)
       {
           cout<<od[od.size()-1]<<" "<<od[od.size()-2]<<endl;
           cnt++;
           od.pop_back();
           od.pop_back();
       }
    }
    return 0;
}

