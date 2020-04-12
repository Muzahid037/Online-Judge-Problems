#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    if(k>(n*n+1)/2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        int cnt=0;
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                //cout<<" i+j:"<<i+j;
                if((i+j)%2==0 && cnt<k)
                {
                    cout<<"L";
                    cnt++;
                }
                else
                {
                    cout<<"S";
                }
               // cout<<" cnt:"<<cnt;
            }
            cout<<"\n";
        }
    }
    return 0;
}


/*
int main()
{
  int n,k;
  cin>>n>>k;
  int cnt=0;
  string s="";
  int flag=0;
  if(k==0){flag=1;}
  for(int i=0;i<n;i++)
  {
          for(int j=0;j<n;j++)
          {
              //cout<<i+j<<endl;
              if((i+j)%2==0 && flag==0)
              {
                  s+="L";
                  cnt++;
                  if(cnt==k){flag=1;}
              }
              else
              {
                  s+="S";
              }
              //cout<<"cnt: "<<cnt<<endl;
          }
  }
  if(flag==0 && k!=0)
  {
      cout<<"NO"<<endl;
  }
  else
  {
      cout<<"YES"<<endl;
      int idx=0;
      for(int i=0;i<n;i++)
  {
          for(int j=0;j<n;j++)
          {
              cout<<s[idx++];
          }
          cout<<"\n";
  }
  }
  return 0;
}
*/
