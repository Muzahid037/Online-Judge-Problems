#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
typedef long double ld;
const double PI = acos(-1.0);
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
#define rep0(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<=n;i++)
#define sf scanf
#define pf printf
#define pb push_back
#define F first
#define S second

int main()
{
    BOOST

    int t;
    t=1;
    //cin>>t;
    while(t--)
    {
        ld v,p;
        cin>>v>>p;
        ld R=p/(2.0*PI);
        ld a=PI*R*R;
        ld b=a/3.0;
        ld H=v/(a-b);
        ld ans=b*H;
        cout<<fixed<<setprecision(4)<<ans<<endl;
    }
    return 0;
}
