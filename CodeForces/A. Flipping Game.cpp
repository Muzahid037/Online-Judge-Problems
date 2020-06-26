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
        int n,a,one=0,zero=0,ans=-1;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a==1)
            {
                one++;
                if(zero>0) zero--;
            }
            else
            {
                zero++;
                ans=max(ans,zero);
            }
        }
        cout<<ans+one<<endl;
    }
    return 0;
}


///------------------------------------------///
/*
///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    int a[n+5];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int cnt=0;
            for(int k=i; k<=j; k++)
            {
                if(a[k]==0) cnt++;
            }
            for(int k=0; k<i; k++)
            {
                if(a[k]==1) cnt++;
            }
            for(int k=j+1; k<n; k++)
            {
                if(a[k]==1) cnt++;
            }
            ans=max(ans,cnt);
        }
    }
    cout<<ans<<endl;
    return 0;
}
*/
