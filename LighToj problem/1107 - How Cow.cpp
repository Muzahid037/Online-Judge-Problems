#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        int cow;
        cin>>cow;

        cout<<"Case "<<i+1<<":"<<endl;
        for(int j=0;j<cow;j++)
        {
            int x,y;
            cin>>x>>y;

            if(x1<x && x<x2 && y1<y && y<y2)
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
