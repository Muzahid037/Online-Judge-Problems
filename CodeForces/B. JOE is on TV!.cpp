///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

int main()
{

    double n;
    cin>>n;

    double ans=0.0;
    while(1)
    {
        double x=(1/n);
       // cout<<"x= "<<x<<endl;
        ans+=(1/n);
        n--;
        if(n==0){break;}
    }
    cout<<setprecision(14)<<ans<<endl;




 return 0;
}
