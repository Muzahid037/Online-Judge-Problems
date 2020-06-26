#include<bits/stdc++.h>
using namespace std;
#define BOOST ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    BOOST
    int x[3],m,ans;
    cin>>x[0]>>x[1]>>x[2]>>m;
    if(x[2]+x[1]+x[0]<=m) ans=1;
    else if(x[2]+x[1]<=m || x[2]+x[0]<=m || x[1]+x[0]<=m) ans=2;
    else ans=3;
    cout<<ans<<endl;
    return 0;
}



