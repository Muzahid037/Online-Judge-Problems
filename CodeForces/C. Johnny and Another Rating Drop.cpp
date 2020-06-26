#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long int lli;
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
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        for(int i=0; i<64; i++)
        {
            if(n&(1LL << i))
            {
                ans+=pow(2LL,i+1)-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
