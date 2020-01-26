#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int m,n,ans;
        cin>>m>>n;
        if(n==1){ans=m;}
        else if(m==1){ans=n;}
        else if(n==2){
           ans=(m/4)*4;
           if(m%4==1)
           {
               ans+=2;
           }
           else if(m%4>1)
           {
               ans+=4;
           }
        }
        else if(m==2)
        {
          ans=(n/4)*4;
          if(n%4==1)
           {
               ans+=2;
           }
           else if(n%4>1)
           {
               ans+=4;
           }

        }
        else{
        ans=ceil(double(m*n)/2);
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }




    return 0;
}
