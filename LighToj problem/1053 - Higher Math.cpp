#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

int t;
cin>>t;

for(int i=1;i<=t;i++)
{
    int a,b,c;
    cin>>a>>b>>c;
    bool flag=false;
    if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
    {
        flag=true;
    }
    if(flag)
    {
        cout<<"Case "<<i<<": "<<"yes"<<endl;
    }
    else
    {
         cout<<"Case "<<i<<": "<<"no"<<endl;
    }
}



    return 0;
}

