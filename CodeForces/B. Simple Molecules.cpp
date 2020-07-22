///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%2==1) cout<<"Impossible"<<endl;
        else
        {
            ll x,y,z;
            x=(a-c+b)/2;
            y=(c+b-a)/2;
            z=(c-b+a)/2;
            if(x>=0 && y>=0 && z>=0) cout<<x<<" "<<y<<" "<<z<<endl;
            else cout<<"Impossible"<<endl;
        }
    return 0;
}
