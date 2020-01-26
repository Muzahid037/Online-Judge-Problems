#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,i=0;
    char x[100];
    cin>>x;
    y=strlen(x);
    while(x[i]!='h'&&i<y)
    {
        i++;
    }
    i++;
    while(x[i]!='e'&&i<y)
    {
        i++;
    }
    i++;
    while(x[i]!='l'&&i<y)
    {
        i++;
    }
    i++;
   while(x[i]!='l'&&i<y)
    {
        i++;
    }
    i++;
    while(x[i]!='o'&&i<y)
    {
        i++;
    }
    if(i<y){
    cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
}
