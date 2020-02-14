#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int a,b,c,r;
        cin>>a>>b>>c>>r;

        int full_dist=abs(a-b);
        int left=c-r;
        int right=c+r;

        int st_unv=max(left,min(a,b));
        int ed_unv=min(right,max(a,b));
        int unv_dist=ed_unv-st_unv;
        int ans=full_dist-max(0,unv_dist);

        cout<<ans<<endl;
    }




    return 0;
}
