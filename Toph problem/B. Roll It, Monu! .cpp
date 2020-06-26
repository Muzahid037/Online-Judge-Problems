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
vector<int>adj[6];
int main()
{
    BOOST

    int t;
    t=1;
    //cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==m) cout<<"0"<<endl;
        else if( (n==1 && m==3) || (n==2 && m==4) || (n==3 && m==1)|| (n==4 && m==2) || (n==5 && m==6) || (n==6 && m==5)) cout<<"2"<<endl;
        else cout<<"1"<<endl;

    }
    return 0;
}
