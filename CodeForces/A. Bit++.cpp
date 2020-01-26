#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,z=0,m,n;
    char c[5];
    cin>>a;
    for(int i=0;i<a;i++)
    {
    cin>>c;
    m=strcmp(c,"X++");
    n=strcmp(c,"++X");
    if(m==0||n==0){z++;}
    else{z--;}
    }
    cout<<z<<endl;
    return 0;
}
