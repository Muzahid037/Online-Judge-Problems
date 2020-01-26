#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,cnt=0;
    cin>>n>>m;
    if(m==0)
    {
        cout<<"1"<<endl;
        //return 0;
    }
    else if(m==n)
    {
        cout<<"0"<<endl;
        //return 0;
    }
    else if(m<(n/2) || m==(n/2))
    {
        cout<<m<<endl;
    }
    else
    {
        cout<<n-m<<endl;
    }
//    int j=0;
//    for(int i=1;i<=n;i+=2)
//    {
//        if(i<(n-2)){cnt++;}
//        if(i==m){break;}
//
//    }
//    cout<<cnt<<endl;

    return 0;
}
