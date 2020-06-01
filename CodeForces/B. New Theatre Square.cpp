#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y,ans=0,ans2=0;
        cin>>n>>m>>x>>y;
        char arr[n+5][m+5];
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='.') ans2+=x;
            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                if(arr[i][j]=='.' && j+1<=m && arr[i][j+1]=='.')
                {
                    ans+=y;
                    j++;
                }
                else if(arr[i][j]=='.') ans+=x;
            }
        }
        cout<<min(ans,ans2)<<endl;
    }
return  0;
}

