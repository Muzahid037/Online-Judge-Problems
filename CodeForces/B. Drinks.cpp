///Bismillahir Rahmanir Rahim

#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,p,sum=0;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>p;
        sum+=p;
    }

    double ans;
    ans=(double)(sum/n);

    cout<<setprecision(14)<<ans<<endl;


 return 0;
}
