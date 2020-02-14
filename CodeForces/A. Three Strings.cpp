#include<bits/stdc++.h>
using namespace std;
//typedef long long ll;

int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      string a,b,c;
      cin>>a>>b>>c;

      int cnt=0;

      int len=a.size();
      for(int j=0;j<len;j++)
      {
          if(a[j]==c[j] || b[j]==c[j])
          {
              cnt++;
          }
      }
      if(cnt==len)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          cout<<"NO"<<endl;
      }
  }

    return 0;
}
