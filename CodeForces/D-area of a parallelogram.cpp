#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ax,ay,bx,by,cx,cy,dx,dy,area;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>ax>>ay>>bx>>by>>cx>>cy;

        dx=ax+cx-bx;
        dy=ay+cy-by;

       area=0.5*abs(((ax*by)+(bx*cy)+(cx*dy)+(dx*ay))-((ay*bx)+(by*cx)+(cy*dx)+(dy*ax)));

        cout<<"Case "<<i+1<<": "<<dx<<" "<<dy<<" "<<area<<endl;

    }

    return 0;
}
