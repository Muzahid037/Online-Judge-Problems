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
        int n;
        cin>>n;
        string s;
        cin>>s;
        string left="",right="";
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1') break;
            left+=s[i];
        }
        for(int i=n-1; i>=0; i--)
        {
            if(s[i]=='0') break;
            right+=s[i];
        }
        if(left.size()+right.size()==n) cout<<left<<right<<endl;
        else cout<<left<<"0"<<right<<endl;


        ///---------sol:1----------////
        /*

        int n;
        cin>>n;
        string s;
        cin>>s;
        int f10=-1,l10=-1;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='1' && s[i+1]=='0')
            {
                f10=i;
                break;
            }
        }
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='1' && s[i+1]=='0')
            {
                l10=i;
            }
        }
        if(f10==-1)
        {
            cout<<s<<endl;
            continue;
        }
        f10--;
        l10+=2;
        //cout<<f10<<" "<<l10<<endl;
        while(f10>=0 && s[f10]=='1')
        {
            f10--;
        }
        string left="";
        while(f10>=0)
        {
            left+=s[f10];
            f10--;
        }
        reverse(left.begin(),left.end());

        while(l10<n && s[l10]=='0')
        {
            l10++;
        }
        //cout<<l10<<endl;
        string right="";
        while(l10<n)
        {
            right+=s[l10];
            l10++;
        }
        cout<<left<<"0"<<right<<endl;
        */
    }
    return 0;
}

