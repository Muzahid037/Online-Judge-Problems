#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int ln=s.size();
   int cntN=0;
   int cntS=0;
   int cntU=0;
   for(int i=0;i<ln;i++)
   {
      if(s[i]=='N')
      {
          cntN++;
      }
      else if(s[i]=='S')
      {
          cntS++;
      }
      else if(s[i]=='U')
      {
          cntU++;
      }
   }
   cout<<min(cntN,min(cntS,cntU))<<endl;

    return 0;
}

