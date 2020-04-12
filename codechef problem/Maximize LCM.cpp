///incomplete

#include<bits/stdc++.h>
using namespace std;

int lcm(int a[],int n)
{
    int ans,cnt=0;
    for(int i=a[n-1];; i+=a[n-1])
    {
        for(int j=0; j<n-1; j++)
        {
            if(i%a[j]!=0)
            {
                j=n-2;
                cnt=0;
            }
            else
            {
                cnt++;
            }
        }
        if(cnt==n-1)
        {
            ans=i;
            break;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+10];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int pre=lcm(a,n);
        n++;
        int ans=1;
        for(int i=2; i<=m; i++)
        {
            a[n-1]=i;
            if(pre<lcm(a,n))
            {
                ans=i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
