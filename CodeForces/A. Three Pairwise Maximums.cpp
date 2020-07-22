///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x[3];
        cin>>x[0]>>x[1]>>x[2];
        sort(x,x+3);
        if(x[1]==x[2]) cout<<"YES"<<endl<<x[0]<<" "<<x[0]<<" "<<x[2]<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
