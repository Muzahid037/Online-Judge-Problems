#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    BOOST
    int b,w,ans=0;
    cin>>b>>w;
    for(int i=1; i*i<=(b+w); i++)
    {
        int cntTile=i*i;
        int same=cntTile/2;
        int diff=cntTile-(cntTile/2);
        if((same<=b && diff<=w) || (same<=w && diff<=b))
        {
            ans=max(ans,i);
        }
    }
    cout<<ans<<endl;
    return 0;
}
