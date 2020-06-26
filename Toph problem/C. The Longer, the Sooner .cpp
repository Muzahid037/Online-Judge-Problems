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

struct num
{
    int id,val;
};
bool cmp(num x,num y)
{
    if(x.val==y.val)
    {
        return x.id<y.id;
    }
    return x.val<y.val;
}
int main()
{
    BOOST

    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        num obj[n+10];
        for(int j=0; j<n; j++)
        {
            cin>>obj[j].val;
            obj[j].id=j+1;
        }
        sort(obj,obj+n,cmp);
        int cnt=0,ans=0;
//        for(int j=0; j<n; j++)
//        {
//             cout<<obj[j].val<<" "<<obj[j].id<<endl;
//        }

        for(int j=0; j<n-1; j++)
        {

            if(obj[j].id<=obj[j+1].id)
            {
                cnt++;
            }
            else
            {
                ans=max(ans,cnt);
                cnt=0;
            }
        }
        ans=max(ans,cnt);
        cout<<"Case #"<<i<<": "<<ans+1<<endl;
    }
    return 0;
}
