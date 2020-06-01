#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int t;
    cin>>t;
    //t=1;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5],b[n+5];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        ll ans=0,adiff=0,bdiff=0;
        for(int i=1; i<=n; i++)
        {
            cin>>b[i];
            if(a[i]==b[i] && adiff==bdiff)
            {
                ans+=a[i];
            }
            else
            {
                adiff+=a[i];
                bdiff+=b[i];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
