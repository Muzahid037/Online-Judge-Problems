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
        int x,y,val;
        cin>>x>>y;
        val=abs(x)+abs(y);
        int x1=0,y1=val,x2=val,y2=0;
        if(x<0) x2=-1*x2;
        if(y<0) y1=(-1*y1);
        if(x1>x2)
        {
            swap(x1,x2);
            swap(y1,y2);
        }
        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;


        ///----------sol:1--------///
       /*
        int x,y;
        cin>>x>>y;
        int y1x2=abs(x)+abs(y);
        if(x<0 && y<0) cout<<-1*y1x2<<" 0 0 "<<-1*y1x2<<endl;
        else if(x<0) cout<<-1*y1x2<<" 0 0 "<<y1x2<<endl;
        else if(y<0) cout<<"0 "<<-y1x2<<" "<<y1x2<<" 0"<<endl;
        else cout<<"0 "<<y1x2<<" "<<y1x2<<" 0"<<endl;
            */
    }
    return 0;
}
