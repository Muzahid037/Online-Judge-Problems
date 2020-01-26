///Bismillahir Rahmanir Rahim
/**
 *    author: s0L0
 *
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a[3],n;
        cin>>a[0]>>a[1]>>a[2]>>n;
        sort(a,a+3);
       // cout<<a[0]<<a[1]<<a[2];

        int x=a[2]-a[1];
        int y=a[2]-a[0];
        int z=x+y;
        int p=n-z;

        if((n>=z && p%3==0) || (a[0]==a[1] && a[1]==a[2]))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }




    return 0;
}
