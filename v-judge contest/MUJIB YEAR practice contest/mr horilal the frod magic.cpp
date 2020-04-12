#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
double pi= 3.141592653589793;

int main()
{
    double a,r,theta;
    cin>>a>>r>>theta;
    theta=((pi*theta)/(double)180);
    double de=r*theta;
    double area=(theta*r*r)/2;
    cout<<fixed<<setprecision(4)<<(double)area<<" ";
    cout<<fixed<<setprecision(6)<<(double)de<<" ";
    cout<<fixed<<setprecision(10)<<(double)(area+a*r)<<endl;;

    return 0;
}
