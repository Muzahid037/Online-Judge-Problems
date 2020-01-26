#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ct1=0,ct0=0;
    char s[100];
    cin>>n;
    for(int i=0;i<n;i++){cin>>s[i];}
   for(int i=0;i<n;i++){
    if(s[i]=='0'){ct0++;}
    else if(s[i]=='1'){ct1++;}
    }
    if(ct1==0){cout<<"0";return 0;}
    cout<<"1";
     for(int i=0;i<ct0;i++){
         cout<<0;
     }
     return 0;
}
