///-----Bismillahir Rahmanir Rahim-----///
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
        int n,x;
        cin>>n;
        int a[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        vector<int>zero,one,z,o;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x==0)
            {
                zero.pb(a[i]);
                z.pb(a[i]);
            }
            else
            {
                one.pb(a[i]);
                o.pb(a[i]);
            }
        }
        if(!zero.empty() && !one.empty())
        {
            cout<<"YES"<<endl;
        }
        else if(zero.empty())
        {
            sort(o.begin(),o.end());
            int flag=0;
            for(int i=0;i<o.size();i++)
            {
                if(o[i]!=one[i])
                {
                    flag=1;
                    break;
                }

            }
            if(flag==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            sort(z.begin(),z.end());
            int flag=0;
            for(int i=0;i<z.size();i++)
            {
                if(z[i]!=zero[i])
                {
                    flag=1;
                    break;
                }

            }
            if(flag==0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}
/*





*/
