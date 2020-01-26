#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,y,z,n;
    cin>>n>>a>>b>>c;
    for(int i=1; i<n; i++)
    {
        cin>>x>>y>>z;
        a=a+x;
        // cout<<"a= "<<a<<endl;
        b=b+y;
        // cout<<"b= "<<b<<endl;
        c=c+z;
        //  cout<<"c= "<<c<<endl;
    }
    // cout<<a<<" "<<b<<" "<<c<<endl;

    if(a==0 && b==0 && c==0)
    {
        cout<<"YES"<<endl;
    }
    else {cout<<"NO"<<endl;}
    return 0;
}

