#include<bits/stdc++.h>
using namespace std;
int main()                 //v118 <60 ^94 >62
{
    char a,b,c=0,x=0,y=0;
    int n;
    cin>>a>>b>>n;
    for(int i=1;i<=n;i++)
    {
        if(a==118&&b==60||a==60&&b==94||a==94&&b==62||a==62&&b==118)
        {
            x++;
        }
        else if(b==118&&a==60||b==60&&a==94||b==94&&a==62||b==62&&a==118)
        {
            y++;

        }
        c=b;
        b=a;
    }
    if(x==n){
      cout<<"ccw"<<endl;}
      if(y==n){
        cout<<"cw"<<endl;}
          else
            cout<<"undifined"<<endl;
}
