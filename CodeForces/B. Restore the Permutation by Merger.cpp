///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        n=2*n;
        map<int,int>vis;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(vis[x]==0) cout<<x<<" ";
            vis[x]=1;
        }
        cout<<endl;
        vis.clear();
    }
    return 0;
}
