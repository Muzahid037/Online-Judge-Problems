#include<bits/stdc++.h>
using namespace std;


int cnt,w,h;
char c[21][21];
int vis[21][21];


int check(int xi,int yj)
{

        if(xi+1<h && vis[xi+1][yj]==0 && c[xi+1][yj]=='.' )
        {
            vis[xi+1][yj]=1;
            cnt++;
            //cout<<"cnt xu= "<<cnt<<endl;
            check(xi+1,yj);
        }
        if(xi-1>=0 && vis[xi-1][yj]==0 && c[xi-1][yj]=='.')
        {
            vis[xi-1][yj]=1;
            cnt++;
            //cout<<"cnt xd= "<<cnt<<endl;
            check(xi-1,yj);
        }
        if(yj+1<w && vis[xi][yj+1]==0 && c[xi][yj+1]=='.')
        {
            vis[xi][yj+1]=1;
            cnt++;
            //cout<<"cnt yr= "<<cnt<<endl;
            check(xi,yj+1);
        }
        if(yj-1>=0 && vis[xi][yj-1]==0 && c[xi][yj-1]=='.' )
        {
            vis[xi][yj-1]=1;
            cnt++;
            //cout<<"cnt yl= "<<cnt<<endl;
            check(xi,yj-1);
        }

return cnt;

}

int main()

{
    int t,xi,yj;
    cin>>t;

    for(int k=1; k<=t; k++)
    {
        cin>>w>>h;
        for(int i=0; i<h; i++)
        {
            for(int j=0; j<w; j++)
            {
                cin>>c[i][j];
                if(c[i][j]=='@')
                {
                    xi=i;
                    yj=j;
                }

            }
            getchar();
        }
  memset(vis,0,sizeof(vis));
    vis[xi][yj]=1;

           cout<<"Case "<<k<<": "<<check(xi,yj)+1<<endl;

cnt=0;
    }


    return 0;
}
