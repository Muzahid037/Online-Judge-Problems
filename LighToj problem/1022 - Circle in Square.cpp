#include<bits/stdc++.h>
using namespace std;

#define PI 2*acos(0.0)

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double r;
        cin>>r;

        double dm=r*2;
        double sq_area=dm*dm;
        //cout<<sq_area<<endl;
        double cir_area=PI*r*r;
        double area=sq_area-cir_area;
        //cout<<cir_area<<endl;
        cout<<fixed<<setprecision(2)<<"Case "<<i<<": "<<area<<endl;

    }




    return 0;
}

