///Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;

        int cnt=0;
       int a[5]={0};

     for(int i=2;i*i<=n;i++){
            if(n%i==0){
                a[++cnt]=i;
                if(cnt==2){
                    a[++cnt]=n/i;
                    break;
                }
                n/=i;
            }
      }
      if(a[3]==0 || a[1]==a[2] || a[2]==a[3] || a[1]==a[3])
      {
          cout<<"NO"<<endl;
      }
      else
      {
          cout<<"YES"<<"\n"<<a[1]<<" "<<a[2]<<" "<<a[3]<<endl;
      }

    }


 return 0;

}
