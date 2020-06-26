#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    int n,a[3],ans=0;
    cin>>n>>a[0]>>a[1]>>a[2];
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=n; j++)
        {
            int x=n-i*a[0]-j*a[1];
            if(x>=0 && x%a[2]==0) ans=max(ans,i+j+x/a[2]);
        }
    }
    cout<<ans<<endl;
    return 0;
}
