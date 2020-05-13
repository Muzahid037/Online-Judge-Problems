#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

double func(double dmid,double x,double y)
{
    double h1=sqrt((x*x)-(dmid*dmid));
    double h2=sqrt((y*y)-(dmid*dmid));
    return (h1*h2)/(h1+h2);
}
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        double x,y,c;
        cin>>x>>y>>c;
        double dlow=0.0,dhigh=min(x,y),dmid;

        int cnt = 100;
        while(1)
        {
            dmid=(dlow+dhigh)/2.0;
            if(fabs(func(dmid,x,y)-c)<=0.0000001)
            {
                break;
            }
            if(func(dmid,x,y)>c)
            {
                dlow=dmid;
            }
            else
            {
                dhigh=dmid;
            }
        }
        cout<<"Case "<<i<<": ";
        cout<<fixed<<setprecision(10)<<dmid<<endl;
    }

    return 0;
}
