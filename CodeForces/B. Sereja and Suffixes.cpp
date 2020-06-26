///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
int ack[100005],chk[100005],ans[100005];
int main()
{

    int n,m,l;
    scanf("%d%d",&n,&m);
    for(int i=1; i<=n; i++) scanf("%d",&ack[i]);
    for(int i=n; i>0; i--)
    {
        ans[i]=(ans[i+1]+1);
        ans[i]-=chk[ack[i]];
        chk[ack[i]]=1;
    }
    while(m--)
    {
        scanf("%d",&l);
        printf("%d\n",ans[l]);
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
    int n,m,l;
    scanf("%d%d",&n,&m);
    int ack[n+5],ans[n+5];
    for(int i=1; i<=n; i++) scanf("%d",&ack[i]);
    set<int>st;
    for(int i=n; i>0; i--)
    {
        st.insert(ack[i]);
        ans[i]=st.size();
    }
    while(m--)
    {
        scanf("%d",&l);
        printf("%d\n",ans[l]);
    }
    return 0;
}
*/

///-------------------------------------------///
/*

///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    BOOST
    ll n,m;
    cin>>n>>m;
    ll a[n+5],ans[n+5];
    for(ll i=0; i<n; i++) cin>>a[i];
    map<ll,ll>mp;
    ans[n]=0;
    for(ll i=n-1; i>=0; i--)
    {
        if(mp[a[i]]==0)
        {
            ans[i]=(ans[i+1]+1);
            mp[a[i]]++;
        }
        else ans[i]=ans[i+1];
    }
    while(m--)
    {
        ll l;
        cin>>l;
        cout<<ans[l-1]<<endl;
    }
    return 0;
}

*/
