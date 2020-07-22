///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
#define Boost() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int dont[1005];
int main()
{
    Boost();
    int n,m,x,y,midNode;
    cin>>n>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>x>>y;
        dont[x]=dont[y]=1;
    }
    for(int i=1; i<=n; i++)
    {
        if(dont[i]==0)
        {
            midNode=i;
            break;
        }
    }
    cout<<n-1<<endl;
    for(int i=1; i<=n; i++)
    {
        if(midNode!=i) cout<<midNode<<" "<<i<<endl;
    }
    return 0;
}

///Hint: make start graph
