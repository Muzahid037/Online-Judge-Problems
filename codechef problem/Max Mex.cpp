///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
int cnt[2000005];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,ans=0,s=0,c=0;
        cin>>n>>m;
        int x[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>x[i];
            if(x[i]<m)
            {
                cnt[x[i]]++;
                s++;
            }
            else if(x[i]>m)
            {
                c++;
            }
        }
        //cout<<c<<endl;
        m--;
        while(m>0 && cnt[m]>0)
        {
            ans+=cnt[m];
            m--;
        }
        if(ans==s) cout<<ans+c<<endl;
        else cout<<"-1"<<endl;

        for(int i=0; i<n; i++)
        {
            cnt[x[i]]=0;
        }
    }
    return 0;
}
