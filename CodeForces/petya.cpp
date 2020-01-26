#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,l=0,x=0,m=0,s,k,t;
    char a[100],b[100];
    cin>>a>>b;
    for(i=0;a[i]!='\0'||b[i]!='\0';i++){
    if(a[i]==b[i]||a[i]-32==b[i]||a[i]+32==b[i]){x++;}
    }
    if(i==x){cout<<"0"<<endl;
    goto fin;}
    s=strlen(a);
   for(int j=0;j<=s;j++){
    if(a[j]>b[j]){cout<<"1"<<endl;break;}
    if(a[j]<b[j]){cout<<"-1"<<endl;break;}
   }
   fin:
       return 0;
}
