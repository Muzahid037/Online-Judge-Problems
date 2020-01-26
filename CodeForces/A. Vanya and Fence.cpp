///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,x,ans=0;
    cin>>n>>h;

    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x==h || x<h){ans++;}
        else if(x>h){ans+=2;}
    }

    cout<<ans<<endl;

    return 0;
}
