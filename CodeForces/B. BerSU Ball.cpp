///Bismillahir Rahmanir Rahim
/**
 *    author: s0L0
 *
**/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[105];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int m;
    cin>>m;
    int b[105];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(b,b+m);

    int cnt=0;

    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        {
            if(abs(a[i]-b[j])<=1)
            {
               cnt++;
               b[j]=105;
               break;
            }
        }
    }

    cout<<cnt<<endl;



   return 0;
}
