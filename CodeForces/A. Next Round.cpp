#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,z,x[50];
    cin>>n>>k;
    for(int i=0;i<n;i++){
    cin>>x[i];}
    k=k-1;
    cout<<x[k]<<endl;
    z=k;
    for(i=k+1;i<n;i++){
    if(x[k]<x[i]&&x[k]!=0){z=i;}
    else if(x[k]<=0&&x[i]>0){z=i;}
    else if(x[k]>x[i]x[k]!=0){
        z=k;
    }
    else{cout<<"0"<<endl;return 0;}
    }
    cout<<z<<endl;
   // if(z==x[i]){cout<<i+1<<endl;}
    //else if(z==0){cout<<z<<endl;}
   // else{
    //    cout<<k+1<<endl;
   // }
    return 0;
}
