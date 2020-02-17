#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        double m;
        cin>>n>>m;
        int x=ceil(n*m);
        //cout<<x<<endl;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int z;
            cin>>z;
            if(z>50 || z==50)
            {
                cnt++;
            }
        }
        if(cnt<x)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }


    return 0;
}
