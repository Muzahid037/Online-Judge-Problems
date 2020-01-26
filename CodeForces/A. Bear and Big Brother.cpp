///"Bismillahir Rahmanir Rahim"

#include<bits/stdc++.h>
using namespace std;
int main()
{

  int a,b,cnt=0;

  cin>>a>>b;

  while(a<=b)
  {
     cnt++;
     a=a*3;
     b=b*2;
     //cout<<"a= "<<a<<"b= "<<b<<endl;
  }

  cout<<cnt<<endl;


  return 0;
}
