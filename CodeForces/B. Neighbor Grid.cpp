///-----Bismillahir Rahmanir Rahim-----///
#include<bits/stdc++.h>
using namespace std;
int n,m,a[305][305];
int countNeighbour(int i,int j)
{
    if( (i==1 && j==1) || (i==1 && j==m) || (i==n && j==1) || (i==n && j==m) ) return 2;
    else if(i==1 || i==n || j==1 || j==m) return 3;
    else return 4;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++) cin>>a[i][j];
        }
        int flag=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(a[i][j]>0)
                {
                    int cnt=countNeighbour(i,j);
                    if(a[i][j]>cnt)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=1; i<=n; i++)
            {
                for(int j=1; j<=m; j++)
                {
                    int cn=countNeighbour(i,j);
                    if(j==m) cout<<cn<<endl;
                    else cout<<cn<<" ";
                }
            }
        }
    }
    return 0;
}
