#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int ln=s.size();
    string ans="";
   for(int i=0;i<ln;i++)
   {
       if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
       {
           ans+=" ";
           i+=2;
       }
       else
       {
           ans+=s[i];
       }
   }

    cout<<ans<<endl;




    return 0;
}
