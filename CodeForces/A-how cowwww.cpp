#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,x1,y1,x2,y2,m,a,b;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        cin>>x1>>y1>>x2>>y2;
        cin>>m;
        for(j=1; j<=m; j++)
        {
            cin>>a>>b;
            if(((a>=x1) && (a<=x2)) && ((b>=y1) && (b<=y2)))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }

    }
    return 0;
}
