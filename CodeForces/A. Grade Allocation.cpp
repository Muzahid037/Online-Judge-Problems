#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n,m;
     cin>>n>>m;

     int x,cntx=0;
     for(int i=0;i<n;i++)
     {
         cin>>x;
         cntx+=x;
     }

     cout<<min(cntx,m)<<endl;

    }


    return 0;
}
