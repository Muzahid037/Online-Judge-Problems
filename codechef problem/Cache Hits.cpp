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
    //Boost();

    int t;
    t=1;
    cin>>t;
    while(t--)
    {
        int n,b,m;
        cin>>n>>b>>m;
        int cnt=0;
        int block=0;
        int bl[n+5];
        for(int i=0; i<n; i++)
        {
            if(cnt<b-1)
            {
                bl[i]=block;
                cnt++;
            }
            else if(cnt==b-1)
            {
                bl[i]=block;
                block++;
                cnt=0;
            }
        }
//        for(int i=0; i<n; i++)
//        {
//            cout<<"block of "<<i<<" :"<<bl[i]<<endl;
//        }

        int x[m+5];
        for(int i=0; i<m; i++)
        {
            cin>>x[i];
        }
        int ans=1;
        int blc=bl[x[0]];
        for(int i=1; i<m; i++)
        {
            if(blc!=bl[x[i]])
            {
                ans++;
                blc=bl[x[i]];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
