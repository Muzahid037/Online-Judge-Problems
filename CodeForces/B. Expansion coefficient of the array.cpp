#include<bits/stdc++.h>
using namespace std;

int a[300005];

int main()
{
 long long n,maxi,mini;
 cin>>n;
 long long minm=9999999999,maxm=0;
 for(long long i=1;i<=n;i++)
 {
     cin>>a[i];
     if(a[i]<minm){minm=a[i];mini=i;}
      //if(a[i]>maxm){maxm=a[i];maxi=i;}
 }
// if(minm==0){cout<<"0"<<endl;}
// else {cout<<floor((a[n-1])/(n-1))<<endl;}
maxm=a[n];
maxi=n;
cout<<maxi<<" "<<mini<<endl;
cout<<(maxm-minm)+(maxi-mini)<<endl;


 return 0;
}
