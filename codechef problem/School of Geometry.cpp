#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[10005],b[10005];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
         for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        sort(b,b+n);
        int ans=0;
         for(int j=n-1;j>=0;j--)
        {
            if(a[j]>=b[j])
            {
                ans+=b[j];
            }

            else
            {
                ans+=a[j];
            }
        }
        cout<<ans<<endl;
    }



    return 0;
}
