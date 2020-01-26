#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int mx=0;
        for(int j=0; j<n; j++)
        {
            int s,p,v;
            cin>>s>>p>>v;

            mx=max( mx,(p/(s+1))*v);

        }

        cout<<mx<<endl;
    }
}
