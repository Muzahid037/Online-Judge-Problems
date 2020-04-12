#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod=1000000007;
map<int,int>mp;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n,x,ans=0;
        cin>>n>>x;
        int a[n+10];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            mp[a[i]]=1;
        }
        for(int i=1;i<1000;i++)
        {

            if(mp[i]==0)
            {
               ans++;
            }
           // cout<<"ans: "<<ans<<" i: "<<i<<endl;
            if(ans>x)
            {

                ans=i-1;
                break;
            }
        }
        cout<<ans<<endl;
        mp.clear();
    }

    return 0;
}
