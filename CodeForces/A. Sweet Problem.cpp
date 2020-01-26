#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t,ans,x,y;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int a[3];
        for(int j=0; j<3; j++)
        {

            cin>>a[j];
        }
        sort(a, a+3);

        ans=a[0];

        x=a[2]-a[1];

        if(a[0]<x)
        {
            ans=ans+a[1];
        }
        else{
                y=a[0]-x;
         y=y%2;
            ans=ans+ceil(a[1]-y);
        }


        cout<<ans<<endl;
        ans=0;
    }
}
