#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
       double Ox, Oy, Ax, Ay, Bx, By;   ///

       cin>>Ox>>Oy>>Ax>>Ay>>Bx>>By;
       double OA=sqrt(((Ox-Ax)*(Ox-Ax))+((Oy-Ay)*(Oy-Ay)));
       double OB=sqrt(((Ox-Bx)*(Ox-Bx))+((Oy-By)*(Oy-By)));
       double AB=sqrt(((Ax-Bx)*(Ax-Bx))+((Ay-By)*(Ay-By)));
       double Ang=acos((OA*OA+OB*OB-AB*AB)/(2*OA*OB));
       double arc=double(OA*Ang);

       // printf("Case %d: %lf\n",i,arc);
       cout<<"Case "<<i<<": "<<fixed <<arc<<endl;
    }
}
