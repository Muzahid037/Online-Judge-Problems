#include<bits/stdc++.h>
using namespace std;


long long a[100010];

int main()
{
    long long n,m;
    cin>>n>>m;

    long long step=0,x;


    for(long long i=0; i<m; i++)
    {
        cin>>a[i];

        if(i==0)
        {
            step+=(a[i]-1);
            x=a[i];
        }
        else if(x<a[i])
        {
            step+=(a[i]-x);
            x=a[i];
        }
        else if(x>a[i])
        {
            step+=((n-x)+(a[i]-1)+1);
            x=a[i];
        }

      //  cout<<"step ="<<step<<endl;
    }

    cout<<step<<endl;

//    int i=1,j=0,step=0,cnt=0;
//
//    while(1)
//    {
//        if(i>n){i=1;}
//
//        if(a[j]==i && a[j+1]!=i){cnt++;j++;}
//        else if(a[j]==i && a[j+1]==i){cnt+=2;j+=2;}
//        if(cnt==m){break;}
//
//        step++;
//        i++;
//    }
//
//    cout<<step<<endl;


    return 0;
}
