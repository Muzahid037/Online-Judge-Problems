
#include<bits/stdc++.h>
using namespace std;

int a[100005];
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
    int n;
    cin>>n;

    int sum=0;
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
        sum+=a[j];
    }

    int left=0,right=0,flag=0,k=0;

      for(k=0;k<n;k++)
    {
      left+=a[k];
      right+=a[n-1-k];

      if(left>=sum || right>=sum)
      {
          flag=1;
          break;
      }
    }
    if(flag==1 && k!=n-1 ){cout<<"NO"<<endl;}
    else{cout<<"YES"<<endl;}

    }




 return 0;

}
