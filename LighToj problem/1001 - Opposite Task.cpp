#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
      int n;
      cin>>n;
      if(n<=10){cout<<"0 "<<n<<endl;}
      else
      {
          cout<<"10 "<<n-10<<endl;
      }
  }




  return 0;
}
