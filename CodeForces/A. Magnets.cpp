#include<bits/stdc++.h>
using namespace std;

int main()
{

 int n;
 cin>>n;

 string x,y;
 int grp=0;

 cin>>x;

 for(int i=1;i<n;i++)
 {
     cin>>y;
     if(x[0]!=y[0]){grp++;}
     x[0]=y[0];
 }

 cout<<grp+1<<endl;

 return 0;
}
