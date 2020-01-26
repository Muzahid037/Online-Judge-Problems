#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,s;
    char c[105];
    cin>>n;
    s=0;
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        if(c[i]=='-' && s!=0){s-=1;}
        else if(c[i]=='-' && s==0){s=0;}
        else if(c[i]=='+' && s<n){s+=1;}
        else if(c[i]=='+' && s==n){s=n;}
    }
cout<<s<<endl;
    return 0;
}
